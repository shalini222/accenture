/******************************************************************************

 leadersSum                       

*******************************************************************************/
// Accenture 30
#include <bits/stdc++.h>

using namespace std;
int leadersSum(int a[], int n){
    if(n ==0){
        return -1;
    }
    
    int sum =0;
    // for(int i =0; i<n; i++){
    //     for(int j = i+1; j<n; j++){
    //         if(a[j]>a[i]){
    //             sum += a[j];
    //         }
    //     }
    // }
    
    
    int i =0;
    int j=i+1;
    
    while(i!= n && j!= n){
       
       
       if(a[j]>=a[i]){
           sum += a[j];
       }
       
        i++;
        j++;
    }
    
    
    
    
    
    int right = a[n-1];
    
    
    
    
    
    
    return (sum+right);
}

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int res = leadersSum(a,n);
    
    cout<<res;
    
    
}