/******************************************************************************

*******************************************************************************/
// accenture exam  6
//Majority Element
#include <bits/stdc++.h>

using namespace std;


int majorityElement(int arr[], int n)
{
    int maxCount = 0;
    int index = -1; 
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
 
        
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }
 
   
    if (maxCount > n / 2)
        return arr[index];
 
    else
        return -1;
}

int main(){
    
   int n;
   cin>>n;
   
   int arr[n];
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
   int res = majorityElement(arr, n);
   cout<<res;
    return 0;
}