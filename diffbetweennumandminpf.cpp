/******************************************************************************

                    diff between num and it's min prine factor          
*******************************************************************************/
// Accenture 34
#include <bits/stdc++.h>

using namespace std;


int minpf(int num){
   
   
    if(num == 0){
        return 0;
    }
    
    
    
    if(num%2==0){
        return 2;
    }
    
    for(int i=3; i<=sqrt(num); i=i+2){
        if(num%i==0){
            return i;
        }
    }
    
    
    return num;
    
    
}




int main()
{
    
        int num;
        cin>>num;
        
        int r = minpf(num);
        int diff = num-r;
        cout<<diff;
    return 0;
}
