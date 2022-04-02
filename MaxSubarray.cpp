/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Max SubArray
#include <bits/stdc++.h>

using namespace std;



int Maxsubarray(int arr[], int n){
    if(n == 0){
        return -1;
    }
    
    
    int i;
    
    int sum,msum;
    
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            sum=arr[i];
            msum=sum;
        }
        else
        {
            sum=max(sum+arr[i],arr[i]);
            msum=max(sum,msum);
        }
    }
    return msum;
}





int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int res = Maxsubarray(arr,n);
    cout<<res;
}
