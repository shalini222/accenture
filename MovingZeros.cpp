/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Pushing all the zeros at the end
#include <bits/stdc++.h>

using namespace std;


void pushZerosToEnd(int arr[], int n)
{
    int count = {0}; 
 
    
    for (int i = 0; i < n; i++)
        if (arr[i] != 0)
            arr[count++] = arr[i]; 
   
    while (count < n)
        arr[count++] = 0;
}






int main()
{
   int n;
     cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
  
    
     pushZerosToEnd(arr, n);
     
      for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
   }
   
   return 0;
}
