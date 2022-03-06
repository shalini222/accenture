/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#Write a function to validate if the provided two strings are anagrams or not. If the two strings are anagrams, then return ‘yes’. Otherwise, return ‘no’.





#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string s1, string s2){
    int n1 = s1.length();
    int n2 = s2.length();
    
    if( n1 != n2){
        return false;
    }


        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
           
            for(int i =0; i<=n1; i++){
                if(s1[i] != s2[i]){
                    return false;
                }
            }       
           
    
return true;

}




int main(){
  string s1;
  cin>>s1;
  
  string s2;
  cin>>s2;
  
  if(isAnagram(s1, s2)){
      cout<<"yes"<<endl;
      
  }else{
      cout<<"no"<<endl;
  }
  








