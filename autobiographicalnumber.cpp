/******************************************************************************
Execute the function Def Autocount(n).

The function accepts the string n. It checks whether the number is an autobiographical number or not. If an integer returns, then it is an autobiographical number. If 0 returns, then it is not an autobiographical number.

Assumption

    The input value should not be more than 10 characters.
    The input string will have numeric characters.


*******************************************************************************/
// Accenture 11
#include <bits/stdc++.h>

using namespace std;
int Autocount(string s){
    int n = s.size();
    
    
    // counting freq
    
    int a[n]={0};
    for(int i =0; i<n; i++){
        a[s[i] - '0']++;
    }
    
    
    // check autobiographical or noty
    
    for(int i =0; i<n; i++){
            if(a[i] != s[i] - '0')
            return 0;
    }
    
    int count = 0;
    for(int i = 0; i<n; i++){
        if(a[i]>0){
            count++;
        }
    }
    
    return count;
}
int main()
{
    string s;
    cin>>s;
    
    int res = Autocount(s);
    cout<<res;
    return 0;
}
