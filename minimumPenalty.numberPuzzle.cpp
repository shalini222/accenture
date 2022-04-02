/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Mimimum Penalty 
#include <bits/stdc++.h>

using namespace std;


int miniPenalty(int a[], int n){
    if( n == 0){
        return -1;
    }
    
    
    sort(a, a+n);
    int diff = 0;
    
    for(int i =1; i<n; i++){
       diff += abs(a[i]-a[i-1]);
    }
    
    return diff;
}




int main()
{
   
   int n;
   cin>>n;
   
   int a[n];
   for(int i=0; i<n; i++){
       cin>>a[i];
   }
   
   
   int res = miniPenalty(a, n);
   cout<<res;
   
   
   return 0;
   
}