/******************************************************************************
Write a number ‘N’ (containing at most 10,000 digits), find the next grater number having the same digits. It is guaranteed that there exists a next greater number having the same digits as N.
Input specification:
Input1: The length of the string ‘N’.
Input2: The number ‘N’ in the form of a string.
Output Specification:
Return the next greater number having the same digits as ‘N’ in the form of a string.
Example 1:
Input 1: 3
Input 2: 182
Output: 218
Explanation:
The next greater number after 182 is 218 using {1,8,2}
Example 2:
Input 1: 4
Input 2: 2345
Output: 2354
Explanation:
The next greater number after 2345 is 2345 using {2,3,4,5}
                               

*******************************************************************************/
// Accenture 39
#include <bits/stdc++.h>

using namespace std;
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void findNext(char number[], int n)
{
    int i, j;
    for (i = n-1; i > 0; i--)
        if (number[i] > number[i-1])
           break;
    if (i==0)
    {
        cout << "Next number is not possible";
        return;
    }
    int x = number[i-1], smallest = i;
    for (j = i+1; j < n; j++)
        if (number[j] > x && number[j] < number[smallest])
            smallest = j;
    swap(&number[smallest], &number[i-1]);
    sort(number + i, number + n);
    cout << number;
 
    return;
}

int main()
{
    int n;
    cin >> n;
    char digits[n];
    cin >> digits;
    findNext(digits, n);
    return 0;
}