/******************************************************************************
Write a function mergeArrays which merges two sorted arrays to create one single sorted array. Complete the function int* mergeArrays(int a[], int b[], int asize, int bsize) below which takes the pointers to the first element of the two sorted arrays and the size of the arrays, and returns the base address of the final sorted array.


*******************************************************************************/
// Accenture 13
#include <bits/stdc++.h>

using namespace std;


void mergeArrays(int arr1[], int arr2[], int n1,
                             int n2){
    
    
   
    int arr3[100];
        int i = 0, j = 0, k = 0;
 
    // Traverse both array
    while (i<n1 && j <n2)
    {
      
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
 
    
    while (i < n1)
        arr3[k++] = arr1[i++];
 
   
    while (j < n2)
        arr3[k++] = arr2[j++];
        
        
        
        
        for(int d = 0; d<(n1+n2); d++){
            cout<<arr3[d]<<endl;
        }
}
    
   
    
    




int main(){
        int n;
        cin>>n;
        int a[n];
        for(int i =0; i<n; i++){
            cin>>a[i];
        }
        
         int m;
        cin>>m;
        int b[m];
        for(int j =  0; j<m; j++){
            cin>>b[j];
        }
        sort(a, a+n);
        sort(b, b+m);
        mergeArrays(a, b, n, m);
        
        
    return 0;
}
