/******************************************************************************

*******************************************************************************/
// accenture exam  7
//Number of Selective Arrangement
#include <bits/stdc++.h>

using namespace std;

int Arrangements(int n){
   if (n == 1) return 0;
  if (n == 2|| n==0) return 1;
 
 
  return (n - 1) * (Arrangements(n - 1) + Arrangements(n - 2));
}

int main(){
    int n;
    cin>>n;
    
    int res =Arrangements(n);
    cout<<res;
    
    return 0;
}
