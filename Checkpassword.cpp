/******************************************************************************
 Perform the function Checkpassword (char str[], int n)

Execute the function which happens to be 1 if the str is a valid password or it remains 0.

Conditions for a valid password: 

    The password should have at least 4 characters.
    It should have at least 1 digit.
    It should have one capital letter.
    It should not have any spaces or obliques (/).
    The first character should not be a number.
*******************************************************************************/
// Accenture 9
#include <bits/stdc++.h>

using namespace std;


int Checkpassword(string str, int n){
    
    int i = 0;
    
    
    if(n < 4){
        return 0;
    }
    
    if(str[i] - '0' >= 0 && str[i] - '0' <= 9){
        return 0;
    }
    
    int cap =0;
    int num = 0;
    
    while(i<n){
        if(str[i]==' ' || str[i]=='/'){
            return 0;
        }
        if(str[i] - '0' >= 0 && str[i] - '0' <= 9){
            num++;
        }
         if(str[i] >= 65 && str[i] < 92){
            cap++;
        }
        
        
        
        
        
        
        
        
        i++;
    }
    
    
    
        return cap>0 && num>0;
    
    
}







int main()
{
   string str;
   cin>>str;
   
   int n = str.size();
  int res = Checkpassword(str, n);
  cout<<res<<endl;
   
   
    return 0;
}
