/******************************************************************************

          Largest row and col Sum                 

*******************************************************************************/
// Accenture 41
#include <bits/stdc++.h>

using namespace std;





    

int main()
{
    int N, M;
    cin>>N;
    cin>>M;
    int Matrix[N][M];
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            cin>>Matrix[i][j];

    int Row = 0;
    for(int i = 0; i < N; i++)
    {
        int sum = 0;
        for(int j = 0; j < M; j++)
            sum = sum + Matrix[i][j];
        if(Row < sum)
            Row = sum;
    }
    int Column = 0;
    for(int i = 0; i < M; i++)
    {
        int sum = 0;
        for(int j = 0; j < N; j++)
            sum = sum + Matrix[j][i];
        if(Column < sum)
            Column = sum;
    }
    cout<<Row+Column;
    return 0;
}
    
    
   