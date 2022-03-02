/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Accenture1
#include <bits/stdc++.h>

using namespace std;



void relativeSpeed(int direction, int dis1, int time1,  int dis2, int time2  ){
    if(direction == 0){
         int speed1 = dis1/time1;
         int speed2 = dis2/time2;
         cout<< (speed1+speed2);
    }
    if(direction == 1){
         int speed1 = dis1/time1;
         int speed2 = dis2/time2;
         cout<< (speed1-speed2);
    }
}

int main()
{
    
    
    int direction;
    cin>>direction;
    
    int dis1;
    cin>>dis1;
    
    int time1;
    cin>>time1;
    
    
    int dis2;
    cin>>dis2;
    
    int time2;
    cin>>time2;
    
    
    
    
    
    relativeSpeed(direction, dis1, time1, dis2, time2);

    
}
