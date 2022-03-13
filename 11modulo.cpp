/******************************************************************************

 Find a string of a length of 1000 for a large number. Output is the modulo of 11. The output specification is to return the remainder modulo 11 of the input.
*******************************************************************************/
// accenture 15


#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int n = s.size();
    
    int num, rem = 0;
    
    for(int i =0; i<n; i++){
        num = rem*10+s[i]-'0';
        rem = num%11;
    }
    
    cout<<rem;
 
//  easier :)
//   string s;
//     cin>>s;
    
//     int n = stoi(s);
//     int res = n%11;
    
//     cout<<res;
 
 
 
 
 
 
    return 0;
}
