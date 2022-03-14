/******************************************************************************

       Execute a function that accepts the integer array of length ‘size’ and finds out the maximum number that can be formed by permutation.
*******************************************************************************/
// Acenture 20
#include <bits/stdc++.h>

using namespace std;







int main()
{
    // (to take strings with white space)
    char str[1000];
    cin.getline(str,1000);   
    
    string res ="";
    for(int i =0; i<strlen(str); i++){
        if(str[i] != ' '){
            res += str[i];
        }
    }
    
    
    sort(res.begin(), res.end());
    reverse(res.begin(), res.end());
    
    cout<<res;
    return 0;
}
