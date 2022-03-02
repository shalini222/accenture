/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Accenture2
#include <bits/stdc++.h>

using namespace std;


void sum(int a[], int n){
    
    int pos = 0;
    int res =0;
    if(n <= 3){
        cout<<0<<endl;
        
    }else{
        int r1 = a[pos+1];
        int r2 = a[n-2];
         res = r1+r2;
         cout<<res;
        
    }
    
    // cout<<res<<endl;
}

int main(){


int n;
cin>>n;

int a[n];
for(int i = 0; i<n; i++){
    cin>>a[i];
}

sort(a, a+n);

reverse(a, a+n);

sum(a, n);

    
    
}

    

