/******************************************************************************

Trailing Zeros
*******************************************************************************/
// accenture 47
#include <bits/stdc++.h>

using namespace std;



int fact(int n){
    if(n == 0 || n==1){
        return 1;
    }
    
    return n*fact(n-1);
}


int TrailingZeros(int n){
    if(n ==0 || n == 1){
        return -1;
    }
    
    int f1 = fact(n);
    int c=0;
    while(f1 != 0){
        int rem = f1%10;
        if(rem == 0){
           c++; 
        }
        else{
            break;
        }
        f1 = f1/10;
    }
    
    
    return c;
}












int main()
{
   int n;
   cin>>n;
   
   int res = TrailingZeros(n);
   cout<<res;
    return 0;
}
