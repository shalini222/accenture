/******************************************************************************

*******************************************************************************/
// Accenture 8
#include <bits/stdc++.h>

using namespace std;



int calculate( int m,int n){
    
    int sum = 0;
    
    for(int i=m; i<=n; i++){
        if((i%3==0)&&(i%5==0)){
            sum += i;
        }
    }
    
    
    return sum;
    
    
    
    
}







int main()
{
   int m;
   cin>>m;
   int n;
   cin>>n;
   
   
   int res = calculate(m,n);
   cout<<res<<endl;
   
    return 0;
}
