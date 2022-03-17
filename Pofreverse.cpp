/******************************************************************************
6
22 7 1 -5 5 -2
4 -1 21 12 10 -3
-102
 ProducutofSum reverse 

*******************************************************************************/
// accenture 36
#include <bits/stdc++.h>

using namespace std;


int specialSum(int a[],int b[], int n){
    
    if(n==0){
        return -1;
    }
    int sum =0;
    
    for(int i=0; i<n; i++){
      
            sum += a[i]*b[n-i-1];
        
    }
    
    
     return sum;
}







int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }

  
    
    int b[n];
    for(int i=0; i<n;i++){
        cin>>b[i];
    }
    

   
    
     cout<<specialSum(a, b, n);

    return 0;
}
