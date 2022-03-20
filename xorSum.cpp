/******************************************************************************

XOR of an std::array<T, N> ;
*******************************************************************************/
// accenture 48
#include <bits/stdc++.h>

using namespace std;








int xorsum(int a[], int n){
    if(n == 0){
        return -1;
    }
    
    int sum =0;
    for(int i =0; i<n; i++){
       sum = sum xor a[i];
    }
    
    
    
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
    
    int res =xorsum(a,n);
    cout<<res;
    
    return 0;
}
