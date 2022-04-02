/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;


void king_george(int number) {
    int x[100] = {0, 1, 1};
    int y[100] = {0, 1, 2};
    for(int i=3;i<=number;i++) {
        x[i] += y[i - 1];
        y[i] += x[i - 1] + y[i - 1];
    }
    int result = x[number] + y[number];
    cout << result * result;
}
    
int main()
{

	int n;
	cin >> n;
	king_george(n);
}