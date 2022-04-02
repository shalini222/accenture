/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Eulars Totient Ratio 
#include <bits/stdc++.h>

using namespace std;




int Eulars(int n){
    if( n == 0){
        return 0;
    }
    
    if( n == 1){
        return 1;
    }
    
    int sum = 0;
    
    for( int i=0; i<=n; i++){
        sum += i*i;
    }
    
    return sum;
}




int main()
{
   int n;
   cin>>n;
   
   int res = Eulars(n);
   cout<<res;
   
   
   return 0;
   
}