/******************************************************************************
Last Third Consonant
*******************************************************************************/
// accenture 49
#include <bits/stdc++.h>

using namespace std;



void LTC(string a){
   reverse(a.begin(), a.end());
   
   int c =0;
   char ans;
   int n = a.size();
   for(int i=0; i<n; i++){
       if((c<3) && ((a[i] != 'a')and(a[i] != 'e')and(a[i] != 'i')and(a[i] != 'o')and(a[i] != 'u'))){
         
           ans =a[i];
           c++;
       }
   }
   
   cout<<ans;
}










int main()
{
   
   string s;
   cin>>s;
   
   LTC(s);
    return 0;
}
