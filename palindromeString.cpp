/******************************************************************************

       Write a function to find if the given string is a palindrome or not. Return 1 if the input string is a palindrome, else return 0.
       
       
*******************************************************************************/
// Acenture 18
#include <bits/stdc++.h>

using namespace std;


bool palindrome(string s){
    
    int n= s.size();
    string original = s;
    
    reverse(s.begin(), s.end());
    
    string rev = s;
    
    for(int i=0; i<n; i++){
        if(original[i] != rev[i]){
            return false;
        }
    }
    
    
    return true;
}








int main()
{
   string s;
   cin>>s;
   
   if(palindrome(s)){
       cout<<1;
   }else{
       cout<<0;
   }
    
    return 0;
}
