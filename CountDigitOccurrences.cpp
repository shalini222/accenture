/******************************************************************************
Count Digit Occurrences

You are required to implement the following function:

int CountDigitOccurrences(int l, int u, int x);

The function accepts 3 positive integers 'l', 'u' and 'x' as its argument. you are required to calculate the number of occurrences of a digit 'x' in the digit of number lying in the range between 'l' and 'u' both inclusive, and return the same.

Note:

l < = u
0 < = x < = 9

Test Case 1

Input :
l : 2
u : 13
x : 3

Output :
2

Explanation

The number of occurrences of digit 3 in the digits of the number lying in the range [2,13] both inclusive is 2, i.e{3,13}, hence 2 is returned.

Test Case 2

Input :
l: 1
u: 30
x: 2

Output :
13 
*******************************************************************************/
// accenture 47
#include <bits/stdc++.h>

using namespace std;


int CountDigitOccurrences(int l, int u, int x){
    
    
  
    
    int c2 =0;
    for(int i = l; i<=u; i++){
        int o = i;
       
        
        while(o!=0){
            int r = o%10;
            
            
            if(r == x){
                c2++;
            }
            
            o = o/10;
        }
        
    }
    
    
    return c2;
    
}


int main()
{
  int l;
  cin>>l;
  
  int u;
  cin>>u;
  
  int x;
  cin>>x;
  
  
  
  int res = CountDigitOccurrences(l,u,x);
  cout<<res;
  
  
  
  
  
   
   return 0;
}
