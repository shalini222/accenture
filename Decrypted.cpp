/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Nth character in decrypted string
#include <bits/stdc++.h>

using namespace std;


char decrypted(string s,int k)
{
    
    string expand = "";
 
    string temp; 
    int freq = 0;
 
    for (int i=0; s[i]!='\0'; )
    {
        temp = ""; 
        freq = 0; 
 
        
        while (s[i]>='a' && s[i]<='z')
        {
           
            temp.push_back(s[i]);
            i++;
        }
 
        
        while (s[i]>='1' && s[i]<='9')
        {
            
            freq = freq*10 + s[i] - '0';
            i++;
        }
 
       
        for (int j=1; j<=freq; j++)
            expand.append(temp);
    }
 
   
    if (freq==0)
        expand.append(temp);
 
    return expand[k-1];
}






int main()
{
    string s;
    cin>>s;
    
    int k;
    cin>>k;
    
    char res = decrypted(s,k);
    cout<<res;
    
}
