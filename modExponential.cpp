/******************************************************************************

Given three numbers b, e and m. Fill in a function that takes these three positive integer values and outputs b^e mod m.
Input specification:
Input1: poisitive integer, b
Input2: poisitive integer, e
Input3: poisitive integer, m
Output Specification:
Return an integer on calculating b^e mod m.
Example 1:
Input 1: 2
Input 2: 10
Input 3: 1025
Output: 1024
Explanation:
2^10 mod 1025 = 1024
Example 2:
Input 1: 4
Input 2: 10
Input 3: 1025
Output: 1
Explanation:
4^10 mod 1025 = 1

*******************************************************************************/
// accenture 38
#include <bits/stdc++.h>

using namespace std;

int modExp(int b, int e, int m){
    int rem = pow(b, e);
    
    int t = m%rem;
    
    return t;
}



int main()
{

   
int b;
cin>>b;

int e;
cin>>e;

int m;
cin>>m;

int res = modExp(b,e,m);
cout<<res;
 
 
 
    return 0;
}
