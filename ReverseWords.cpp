/******************************************************************************
            Perform a function to reverse a string word-wise. The input here will be the string. In the output, the last word mentioned should come as the first word and vice versa.
      
*******************************************************************************/
// Acenture 22
#include <bits/stdc++.h>

using namespace std;


void reverseWords(string s){
    vector<string>t;
    string ans ="";
    int n=s.size();
    for(int i =0; i<n; i++){
        if(s[i]==' '){
            t.push_back(ans);
            ans = "";
        }else{
            ans += s[i];
        }
    }
    
    t.push_back(ans);
    
    for(int i=t.size()-1; i>0; i--){
        cout<<t[i]<<" ";
    }
    
      cout<<t[0]<<endl;
}

int main()
{
    
    char s[1000];
    cin.getline(s, 1000);
    reverseWords(s);
   
   
}
