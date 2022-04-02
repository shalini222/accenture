/******************************************************************************
A thief, jack Sparrow plans to escape from jail. He , being a monkey man, can jump over a wall. jack has practiced well and succeeds in jumping X meters. 
However, the wall is slippery, so he slides down Y meters after every jump. To escape from jail, he must cross N number of walls, where the height of each wall is given in an array.
Your task is to return the total number of jumps Jack needs to make to escape from the jail.
 
Input Specification:
Input 1: An integer value X denoting the number of meters he can jump up(1<=input1<=10^4)
Input 2: An integer value Y denoting  the number of meters he slides down (1<=input2<=10^4)
Input 3: An integer value N denoting the number of walls he needs to jump to escape(1<=input3<=10^4)
Input 4: An integer array of size N representing the height of each wall where(1<=input4[i]<=1000)
 
Output Specifications:
Return an integer value representing the total number of jumps Jack Sparrow must make in order to escape from the jail.
 
Example 1:
input1: 10
input2: 1
input3: 1
input4: 10
Output: 1
Explanation:
Here, Jack Sparrow can jump a height of 10 meters but slides down by 1 meter.
He was 1 wall to jump, and the height of the wall is 10 meters.
Since he jumps 10 meters in the first attempt, he crosses the wall easily in the first attempt itself.
Therefore, 1 is returned as the output.
Example 2:
Input1: 5
Input2: 1
Input3: 2
Input4: 9 10
Output: 5
Explanation:
Here, Jack Sparrow can jump a height of 5 meters but slides down by 1 meters.
He was 2 walls to jump and the height of each wall is 9 and 10 meters respectively.
First wall
Jack makes 2 attempt because at the first attempt he jumps 5 meters nut slides down by
1 meter and does not cross the wall.
In the next attempt he jumps 5 more meters from that position and this time he
does not slide down and crosses the wall in this attempt(4+5=9)
*******************************************************************************/
// accenture exam  1
// escape from jail
#include <bits/stdc++.h>

using namespace std;
int calculateJumps(int X, int Y, int n, int walls[])
{
    int jumps = 0;
    for(int i=0;i<n;i++) {
        int reach = X;
        int jump = 1;
        while(reach < walls[i]) {
            reach += (X-Y);
            jump += 1;
        }
        jumps += jump;
    }
    return jumps;
}

int main()
{
    int X;
    cin >> X;
    int Y;
    cin >> Y;
    int n;
    cin >> n;
    int walls[n];
    for(int i=0;i<n;i++)
        cin >> walls[i];
    cout << calculateJumps(X, Y, n, walls);
    return 0;
}
