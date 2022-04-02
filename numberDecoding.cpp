/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Number Decoding
#include <bits/stdc++.h>

using namespace std;

int countDecoding(string s, int n)
{
    // base cases
    if (n == 0 || n == 1)
        return 1;
    if (s[0] == '0')
        return 0;
 
    
    int count = 0;
 
   
    if (s[n - 1] > '0')
        count = countDecoding(s, n - 1);

    if (s[n - 2] == '1'
        || (s[n - 2] == '2'
        && s[n - 1] < '7'))
        count += countDecoding(s, n - 2);
 
    return count;
}
 

int countWays(string s, int n)
{
    if (n == 0 || (n == 1 && s[0] == '0'))
        return 0;
    return countDecoding(s, n);
}
   
int main()
{
string s;
cin>>s;
int n = s.size();
 cout << countWays(s, n);
}