/******************************************************************************

 Count Specific Numbers
 
 
 You are required to implement the following function: int CountSpecificNumbers(int m, int n)

The function accepts two arguments m and n which are integers. You are required to calculate the count of numbers having only 1, 4 and 9 as their digits between the numbers lying in the range m and n both inclusive, and return the same. Return -1 if m>n.


Test Case :

Input :

100
200

Output :
9


Explanation:

The numbers between 100 and 200, both inclusive having only 1,4 and 9 as their digits are 111, 114, 119, 141, 144, 149, 191, 194, 199.
The count is 9 hence 9 is returned.

 
 
*******************************************************************************/
// accenture 44
#include <bits/stdc++.h>

using namespace std;


int countSpecificnumber(int a, int b){
    if( a>b){
        return -1;
    }
    
    int c =0;
    
    for(int i =a; i<=b; i++){
        int original = i;
        int f=1;
       while(original > 0){
       int r = original%10;
      original = original/10;
        if(r == 1 || r == 4|| r == 9){
           continue;
        }else{
            f=0;
            break;
        }
         
          
         
       }
       
        if(f == 1){
              c++;
          }
    }
    
    return c;
}




int main()
{
   
   int a,b;
   cin>>a>>b;
   
   int res = countSpecificnumber(a, b);
   cout<<res;
   
   
   
   return 0;
}
