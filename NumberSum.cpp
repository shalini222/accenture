/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Number Sum
#include <bits/stdc++.h>

using namespace std;


int NumberSum(int a[], int n){
    if(n == 0){
        return 0;
    }
    
    sort(a, a+n);
    int f = a[n-1];
    int i = a[0];
    int sum = i+f;
    
    return sum;
}



int main()
{
   
   
   int n;
   cin>>n;
   
   int a[n];
   for(int i=0; i<n; i++){
       cin>>a[i];
   }
   
   int res  = NumberSum(a,n);
   cout<<res;
   
   return 0;
   
}