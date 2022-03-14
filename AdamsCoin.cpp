/******************************************************************************
        Adam decides to do some charity work. From day 1 till day n, he will give i^2 coins to charity. On day ‘i’ (1 < = i < = n), find the number of coins he gives to charity.
        
        
*******************************************************************************/
// Acenture 23
#include <bits/stdc++.h>

using namespace std;
int coins(int n){
    if(n ==0){
        return 0;
    }
    
    int sum =0;
    
    for(int i =0; i<=n; i++){
        sum += i*i;
    }
    
    return sum;
}


int main()
{
    // no of days
    int n;
    cin>>n;
   int rs = coins(n);
   cout<<rs;
   
   return 0;
   
}
