/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// longest IncresingSequence
#include <bits/stdc++.h>

using namespace std;


int LIS(int arr[], int n){
    
    if(n ==0){
        return -1;
    }
    
    
    int *lis, i, j, max = 0;
    lis = (int*)malloc(sizeof(int) * n);
 
 
    for (i = 0; i < n; i++)
        lis[i] = 1;
 
    
    for (i = 1; i < n; i++)
        for (j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
 
  
    for (i = 0; i < n; i++)
        if (max < lis[i])
            max = lis[i];
 
   
    free(lis);
 
    return max;
}







int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int res = LIS(arr,n);
    cout<<res;
}
