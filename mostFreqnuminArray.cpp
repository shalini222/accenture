/******************************************************************************
In a given list of integers, find the number that has the highest frequency. If there are one or more such numbers, give the smaller one as output.


*******************************************************************************/
// Accenture 12
#include <bits/stdc++.h>

using namespace std;



int mostFrequent(int a[], int n){
        
    sort(a, a + n);
 
    
    int max_count = 1, res = a[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = a[i - 1];
            }
            curr_count = 1;
        }
    }
 
   
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = a[n - 1];
    }
 
    return res;
}






int main()
{
   int t;
   cin>>t;
   
  while(t != 0){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
            
        }
       
      int res = mostFrequent( a,n);
      
      cout<<res<<endl;
       
      t--;
  }








    return 0;
}
