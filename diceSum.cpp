/******************************************************************************

      Dice Sum              //  

*******************************************************************************/
// Accenture 31
#include <bits/stdc++.h>

using namespace std;

int diceSum(int n){
  
  int c=0;
  
    for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
            if(i+j == n){
                c++;
        }    }
    }
    
    return c;
}

int main(){
   int n;
   cin>>n;
   
   int res =diceSum(n);
   cout<<res;
    
    
}