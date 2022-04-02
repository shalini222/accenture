/******************************************************************************
Nicks Checks
*******************************************************************************/
// accenture exam  3
//
#include <bits/stdc++.h>

using namespace std;


int checkConsecutive(int arr[], int n){
    
    
     int first_term = *(min_element(arr, arr + n));
 
   
        int ap_sum = (n * (2 * first_term + (n - 1) * 1)) / 2;
 
 
    int arr_sum = 0;
    for (int i = 0; i < n; i++)
        arr_sum += arr[i];
 
    
     if(ap_sum == arr_sum){
         return 1;
     }
    return 0;
    
    
    
}



int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int res = checkConsecutive(arr, n);
    cout<<res;
}