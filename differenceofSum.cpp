/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// differenceofSum(n.m)
#include <bits/stdc++.h>

using namespace std;

void sumOfdiff(int m, int n){
    int sum1 = 0;
    int sum2 = 0;
    
    for(int i =1 ; i<=n; i++){
        if(i%m == 0){
            sum1 += i;
        }else{
            sum2 += i;
        }
    }
    
    cout<<(sum2-sum1)<<endl;
}











int main()
{
  int m;
   cin>>m;
   int n;
   cin>>n;
   
   sumOfdiff(m, n);
}
