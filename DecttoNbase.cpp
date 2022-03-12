/******************************************************************************

    For writing numbers, there is a system called N-base notation. This system uses only N-based symbols. It uses symbols that are listed as the first n symbols. Decimal and n-based notations are 0:0, 1:1, 2:2, …, 10:A, 11:B, …, 35:Z.

Perform the function: Chats DectoNBase(int n, int num)

This function only uses positive integers. Use a positive integer n and num to find out the n-base that is equal to num.

*******************************************************************************/
// Accenture 8
#include <bits/stdc++.h>

using namespace std;



string DectoNBase(int n, int num){
    
    string ans = "";
  int q = num/n;
  
 vector<int> rem; 
 rem.push_back(num%n);
 
 while( q!= 0){
     
     rem.push_back(q%n);
     q = q/n;
 }
    
    
    
    for(int i =0; i<rem.size(); i++){
        if(rem[i] > 9){
            ans += (char)(rem[i]- 9 + 64);
        }else{
            ans += to_string(rem[i]);
        }
    }
    
    return ans;
    
    
}




int main()
{
    int n;
    cin>>n;
    int num;
    cin>>num;
    
   string res = DectoNBase( n, num);
        reverse(res.begin(), res.end());
   cout<<res<<endl;
    return 0;
}
