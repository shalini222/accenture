/******************************************************************************
BMI Calculation
 A person's body mass index is a simple calculation based on height and weight that classifies the person as underweight, overweight, or normal. The formula for metric unit is,

BMI = weight in kilograms / (height in meters)^2

You are given a function,

Int GetBMICategory(int weight, float height);

The function accepts the weight (an integer number) and height (a floating point number) of a person as its arguments. Implement the function such that it calculations the BMI of the person and returns an integer, the person's BMI category as per the given rules:

1. If BMI < 18, return 0.
2. If 18 >= BMI < 25, return 1.
3. If 25 >= BMI < 30, return 2.
4. If 30 >= BMI < 40, return 3.
5. If BMI >= 40, return 4.

Note:

Weight > 0 and its unit is kilogram.
Height > 0 and its unit is metre.
Compute BMI as a floating-point.

Test Case 1:

Input :

42
1.54

Output :
0


Explanation:

The person's weight is 42Kg and height is 1.54 metres BMI = weight in kilograms / (height in meters)2 = 42/(1.54 * 1.54) = 17.70 Since, BMI < 18, as per given rules, the output is 0.

Test Case 2:

Input :

62
1.52

Output :
2



*******************************************************************************/
// accenture 46
#include <bits/stdc++.h>

using namespace std;


int GetBMICategory(float w, float h){
    int bmi = w/(h*h);
    
    if(bmi <18){
        return 0;
    }else if(bmi >=18 and bmi < 25){
        return 1;
    }else if(bmi >=25 and bmi < 30){
        return 2;
    }else if(bmi >=30 and bmi < 40){
        return 3;
    }else{
        return 4;
    }
}

int main()
{
  
   float w;
   cin>>w;
   float h;
   cin>>h;
   int res = GetBMICategory(w,h);
   cout<<res;
   return 0;
}
