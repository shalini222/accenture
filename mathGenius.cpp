/******************************************************************************

*******************************************************************************/
// accenture exam  4
//rahul Maths genius
#include <bits/stdc++.h>

using namespace std;

int mathGenius(int n){
    if(n <=0){
        return 0;
    }
    int count =0;
     while(n > 0){
         if(n %2==0){
             n /=2;
             count++;
         }else{
             n = n-1;
             count++;
         }
     }
     
     return count;
}
int main(){

    int n;
    cin>>n;
  int res = mathGenius(n);
  cout<<res;
}