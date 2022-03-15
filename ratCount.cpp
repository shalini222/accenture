/******************************************************************************
The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i 
*******************************************************************************/
// Accenture 26

// (Rat Count)
#include <bits/stdc++.h>

using namespace std;


int ratCount(int a[], int n, int r, int unit){
    if(n == 0){
        return -1;
    }
    int ans =0;
    int total = r*unit;
    int sum =0;
    for(int i =0; i<n; i++){
        sum += a[i];
        
        if(sum > total){
             ans = i+1;
             return ans;
        }
    }
    
    return 0;
}







int main()
{
    int r;
    cin>>r;
    int unit;
    cin>>unit;
    
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    
    int res = ratCount(a,n,r,unit);
    cout<<res;
    
    
    return 0;
}
