/******************************************************************************

  The given function has a string (str) and two characters, ch1 and ch2. Execute the function in such a way that str returns to its original string, and all the events in ch1 are replaced by ch2, and vice versa.

Replacecharacter(Char str1, Char ch1, Int 1, Char ch2)

*******************************************************************************/
// Accenture 6
#include <bits/stdc++.h>

using namespace std;

void Replacecharacter(string &str,  int &n,char &ch1, char &ch2){
    
    
    
    
    for(int i =0; i<n; i++){
        if(str[i] == ch1 ) {
            str[i] = ch2;
        }
        
       else if(str[i] == ch2){
            str[i] = ch1;
        }
    }
    
    cout<<str<<endl;
    
}



int main()
{
   string str;
   cin>>str;
   
   int n = str.size();
   char ch1;
   cin>>ch1;
   
   char ch2;
   cin>>ch2;
   
   
   Replacecharacter(str, n, ch1, ch2);

   
   
    
    return 0;
}
