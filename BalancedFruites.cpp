/******************************************************************************
Balance Fruits


Implement the following function: int BalanceFruits(int a, int m, int rs);

You have a basket full of apples and mangoes, your job is to make the numer of apples and given a function that accepts three integers 'a', 'm' and 'rs' as its argument where 'a' and a basket respectively and 'rs' is the rupees that you have. Implement the function to balance the basket. If 'a' > 'm', then buy (a - m) mangoes at the rate of Rs 1 per mango. If 'a' < 'm', then sell (m - a) mangoes at the rate of Rs 1 per mango. Return the total rupees left with you after balancing the fruits.  
 
*******************************************************************************/
// accenture 45
#include <bits/stdc++.h>

using namespace std;

int BalanceFruits(int a, int m, int rs){
    if(a>m){
        return (rs-m);
    }else if( a==m){
        return rs;
    }else{
        return (m-rs);
    }
}



int main()
{
   
  int a;
  cin>>a;
  int m;
  cin>>m;
  int rs;
  cin>>rs;
  
  cout<<BalanceFruits(a, m, rs);
   
   
   return 0;
}
