/******************************************************************************

        Write a function to find roots of a quadratic equation ax^2 + bx + c = 0.
       
*******************************************************************************/
// Acenture 19
#include <bits/stdc++.h>

using namespace std;

void findRoots(int a, int b, int c){
     if (a == 0) {
        cout << "Invalid";
        return;
    }
    
    
    int d = b*b - 4*a*c;
    
    int sv = (double)sqrt(abs(d));
    
    if(d>0){
         cout << (double)(-b + sv) / (2 * a) << "\n"
             << (double)(-b - sv) / (2 * a);
    }else if(d == 0){
        cout<<-(double)b/(2*a);
    }else{
         cout << -(double)b / (2 * a) << " + i" << sv
             << "\n"
             << -(double)b / (2 * a) << " - i" << sv;
    }
}








int main()
{
   
    int a, b, c;
    cin>>a>>b>>c;
    findRoots(a,b,c);
    return 0;
}
