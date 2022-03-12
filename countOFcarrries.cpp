/******************************************************************************

   When the sum of the digits exceeds a total of 9, a carry digit is added to the right-left of the digit. Execute the function: Int Numberofcarry(Integer num 1, Integer num 2)

*******************************************************************************/
// Accenture 5
#include <bits/stdc++.h>

using namespace std;

int countOFcarrries(int num1, int num2){
    int r1 =0;
    int count = 0;
    int r2 = 0;
    int carry = 0;
    int sum = 0;
    
    
    while((num1 != 0 )&&(num2 != 0)){
        r1 = num1%10;
        r2 = num2%10;
        
        sum = r1+r2+carry;
        
        if(sum > 9){
            carry = 1;
            count++;
        }else{
            carry = 0;
        }
        
        num1 = num1/10;
        num2 = num2/10;
        
        
        
    }
    
    return count;
    
    
    
    
    
    
}


int main()
{
    int num1;
    cin>>num1;
    
    int num2;
    cin>>num2;
    
    int res = countOFcarrries(num1, num2);
    
    cout<<res<<endl;
    
    return 0;
}
