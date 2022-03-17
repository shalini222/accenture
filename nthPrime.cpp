/******************************************************************************

          nth Prime number                 

*******************************************************************************/
// Accenture 42
#include <bits/stdc++.h>

using namespace std;





    

#define MAX_SIZE 1000005

void primeGenerator(vector<int>& primes)
{
    bool IsPrime[MAX_SIZE];
    memset(IsPrime, true, sizeof(IsPrime));
 
    for (int p = 2; p * p < MAX_SIZE; p++) {
        if (IsPrime[p] == true) {
            for (int i = p * p; i < MAX_SIZE; i += p)
                IsPrime[i] = false;
        }
    }
    for (int p = 2; p < MAX_SIZE; p++)
        if (IsPrime[p])
            primes.push_back(p);
}

int main()
{
    int n;
    vector<int> primes;
    cin >> n;
    primeGenerator(primes);
 
    cout << primes[n-1] << endl;
 
    return 0;
}
    
   