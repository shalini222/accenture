/******************************************************************************

                  Backets Validation        
*******************************************************************************/
// Accenture 35
#include <bits/stdc++.h>

using namespace std;

bool backetsvalidation(string s){
    
    
    int n =s.size();
    
    stack<char>b ;
    char x;
    
    for(int i=0; i<n; i++){
        if(s[i] == '(' || s[i] == '{'       ||    s[i] == '[' ){
            b.push(s[i]);
             continue;
        }
        
            if (s.empty())
            return false;
 
        switch (s[i]) {
        case ')':
             
            // Store the top element in a
            x = b.top();
            b.pop();
            if (x == '{' || x == '[')
                return false;
            break;
 
        case '}':
 
            // Store the top element in b
            x = b.top();
            b.pop();
            if (x == '(' || x == '[')
                return false;
            break;
 
        case ']':
 
            // Store the top element in c
            x = b.top();
            b.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    
    }
    
    return (s.empty());
}



int main()
{
    
    
    string s;
    cin>>s;
    
    if(!backetsvalidation){
        cout<<"compilation error";
    }else{
           cout<<"successful";
    }
    
    
    
    return 0;
}
