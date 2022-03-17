/******************************************************************************
Given ‘a’ (1<=n<=100), find the factorial of ‘n’. The factorial of ‘n’ is defined as the product of all integers.
Input specification:
Input : any number ‘n’
Output Specification:
Return a string containing the factorial.
Example 1:
Input : 5
Output: 120
Explanation:
5!=5*4*3*2*1 = 120
Example 2:
Input 1: 6
Output: 720
Explanation: 6!=6*5*4*3*2*1 = 720
                               

*******************************************************************************/
// Accenture 39
#include <bits/stdc++.h>

using namespace std;


int fact (int n){
    if(n == 0 || n == 1){
        return 1;
    }
    
      return n*fact(n-1);
}




int main(){
    int n;
    cin>>n;
    int res = fact(n);
    cout<<res;
}