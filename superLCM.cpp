/******************************************************************************

                             super LCM 

*******************************************************************************/
// superLCM
#include <bits/stdc++.h>

using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}




int LCM(int a, int b){
     return (a / gcd(a, b)) * b;
}
int main()
{
    int n;
    cin>>n;
    
    int s=0;
    
    
    for(int i=0; i<n; i++){
        s += pow(i+1,n-i-1)*LCM(i+1, n);
    }
        cout<<s;
    return 0;
}
