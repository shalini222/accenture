/******************************************************************************

          sum of largest and smallest         //  

*******************************************************************************/
// Accenture 32
#include <bits/stdc++.h>

using namespace std;


int main(){
  int n;
  cin>>n;
  
  int a[n];
  for(int i =0; i<n; i++){
      cin>>a[i];
  }
  
  sort(a, a+n);
  
  int f = a[0];
  int l = a[n-1];
  
  cout<<(f+l);
    
}