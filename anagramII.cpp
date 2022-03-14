/******************************************************************************

         Write a function to check if the given two strings are anagrams or not. Return ‘Yes’ if they are anagrams, otherwise, return ‘No’.

Example                      

*******************************************************************************/
// Acenture 17
#include <bits/stdc++.h>

using namespace std;


bool anagram(string s1, string s2){
   
   int n1=s1.size();
   int n2 = s2.size();
   
   if(n1!= n2){
       return false;
   }
   
   sort(s1.begin(), s1.end());
   sort(s2.begin(), s2.end());
   
   for(int i=0; i<n1; i++){
       if(s1[i] != s2[i]){
           return false;
       }
   }
   
   
   
   
   return true;
   
   
    
}









int main()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    
    if(anagram(s1, s2)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    
    
    return 0;
}
