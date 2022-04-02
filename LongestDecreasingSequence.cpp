/******************************************************************************
Longest Decreasing Sequence
*******************************************************************************/
// accenture exam  2
//
#include <bits/stdc++.h>

using namespace std;

int lds(int a[], int n){
     int lds[n];
    int i, j, max = 0;
 
    
    for (i = 0; i < n; i++)
        lds[i] = 1;
        
        
     for (i = 1; i < n; i++)
        for (j = 0; j < i; j++)
            if (a[i] < a[j] && lds[i] < lds[j] + 1)
                lds[i] = lds[j] + 1;
    
    
    for (i = 0; i < n; i++)
        if (max < lds[i])
            max = lds[i];
 
    
    return max;
}

int main(){
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int res = lds(a, n);
    cout<<res;
}