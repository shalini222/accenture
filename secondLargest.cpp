/******************************************************************************
    Form an array of 1000 integers and find out the second-largest number. If there is no second largest number, return the value to –1.
        
*******************************************************************************/
// Acenture 24
#include <bits/stdc++.h>

using namespace std;



// int main()
// {
    
//     int n;
//     cin>>n;
    
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
    
//     }
    
//     sort(a, a+n);
    
//     if(n <= 2){
//         cout<<"-1";
//     }
    
    
//     int res = a[n-2];
//     cout<<res;
    
//   return 0;
   
// }
void secondLargest(int arr[], int arr_size)
{
    int i, first, second;
    
    if (arr_size < 2) {
        printf(" Invalid Input ");
        return;
    }
    
    sort(arr, arr + arr_size);
    
    for (i = arr_size - 2; i >= 0; i--) {
        if (arr[i] != arr[arr_size - 1]) {
            printf("%d", arr[i]);
            return;
        }
    }
    printf("There is no second largest element\n");
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    secondLargest(arr, n);
    return 0;
}