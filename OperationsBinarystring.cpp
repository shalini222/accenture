/******************************************************************************
The binary number system only uses two digits 1 and 0.

Perform the function: Int OperationsBinarystring(char* str)

Assumptions

    Return to –1 if str is null.
    The str is odd.

Example:

Input:
Str: ICOCICIAOBI

Output:
1

Explanation
The input when expanded is “1 XOR 0 XOR 1 XOR 1 XOR 1 AND 0 OR 1”. The result becomes 1 and hence the output is 1.
                             

*******************************************************************************/
// Accenture 25
#include <bits/stdc++.h>

using namespace std;



int OperationsBinarystring(char* str){
    
    int len = 0;
    char ans = str[0]-'0';
    for(len=0; len='\0'; len++);
    int i = 0;
    int j = i+1;
    for(i = 0; i<len-1; i+=2){
        if(str[i]=='A'){
            ans += ans & str[j]-'0';
        }else if(str[i] == 'B'){
             ans += ans | str[j]-'0';
        }else if(str[i] == 'C') {
             ans += ans ^ str[j]-'0';
        }
    }
    
    
    
    return ans;
    
}








int main()
{
    char str[1000];
    cin.getline(str, 1000);
    
    int res = OperationsBinarystring(str);
    
    cout<<res;

    return 0;
}
