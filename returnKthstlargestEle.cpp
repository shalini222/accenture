/******************************************************************************

Create web access management to the kth largest number. It will accept an integer k and an array arr as its conditions and has to return the greatest element based on the value of k. That is, if k = 0, return the greatest element. If k = 1, return the second greatest element, and so on.
*******************************************************************************/
// Accenture 14
#include <bits/stdc++.h>

using namespace std;

int idk(int a[], int n, int k){
    sort(a,a+n);
    int r1 = a[n-1-k];
    
    return r1;
}

int main(){
       
        int n;
        cin>>n;
        
        int a[n];
        for(int i =0; i<n; i++){
            cin>>a[i];
        }
        
        int k;
        cin>>k;
        
       int res = idk(a, n, k);
       cout<<res;
    return 0;
}
