/******************************************************************************
            Find the sum of the divisors for the N integer number.
      
*******************************************************************************/
// Acenture 21
#include <bits/stdc++.h>

using namespace std;


void sumofDivisor(int n){
    
    
    int s=0;
    for(int i =1; i<=n; i++){
        if(n%i == 0){
          s += i;  
        }
    }
    
    
    cout<<s;
}




int main()
{
    int n;
    cin>>n;
    
    sumofDivisor(n);
    
    return 0;
}
