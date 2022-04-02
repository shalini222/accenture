/******************************************************************************

*******************************************************************************/
// accenture exam  5
//Moving Apples
#include <bits/stdc++.h>

using namespace std;


int MovingApples(int a[], int n){

    
   
    
    int s=0;
    
    for(int i=0; i<n; i++){
        s+=a[i];
    }
    
  int  avg = s/n;
    int diff =0;
    for(int i=0; i<n; i++){
        if(avg>a[i]){
            diff =diff+abs(avg-a[i]); 
        }
    }
   return diff; 
}



int main(){
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        
        
    }
    
    int res = MovingApples(a , n);
    cout<<res;
    return 0;
}