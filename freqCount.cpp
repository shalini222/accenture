/******************************************************************************

       freq count   
*******************************************************************************/
// Accenture 43
#include <bits/stdc++.h>

using namespace std;


    
   void printFrequency(int freq[])
{
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << (char)(i+'a')<< freq[i];
        }
    }
}

void findFrequncy(char S[])
{
    int i = 0;
    int freq[26] = { 0 };
    while (S[i] != '\0') {
        freq[S[i] - 'a']++;
        i++;
    }
    printFrequency(freq);
}

int main()
{
    char S[100];
    cin >> S;
    findFrequncy(S);
}