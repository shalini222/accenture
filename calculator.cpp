/******************************************************************************
 Perform the function: Int operationchoices(int c, int n, int a, int b). This function considers three positive inputs of a, b and c.
*******************************************************************************/
// Accenture 7
#include <bits/stdc++.h>

using namespace std;




int operationchoices(int c, int a, int b){
    if(c == 1){
        return a+b;
    }else if(c == 2){
        return a-b;
    }else if(c == 3){
        return a*b;
    }else if(c == 4){
        return a/b;
    }else{
        return -1;
    }
}







int main()
{
   int a;
   cin>>a;
   
   int b;
   cin>>b;
   
   int c;
   cin>>c;
   
   
   int res =   operationchoices( c,    a,  b);
        cout<<res<<endl;
    return 0;
}
