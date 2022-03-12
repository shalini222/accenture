/******************************************************************************
Execute this function Void MaxInArray(int arr[], int length)

This function helps in finding the maximum element in the array. Execute this function to print the maximum element in the array with its index.

Assumptions

    The index in the array for all the elements starts at 0.
    The maximum element is in a different line in the output.
    There has to be only one maximum element.
    The function prints only what is required
*******************************************************************************/
// Accenture 10
#include <bits/stdc++.h>

using namespace std;

void MaxInArray(int a[], int n){
    sort(a, a+n);
    int res = a[n-1];
    
    cout<<res<<endl;
    cout<<n-1<<endl;
}


int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    MaxInArray(a,n);
    return 0;
}
