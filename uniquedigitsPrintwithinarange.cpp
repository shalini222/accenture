/******************************************************************************
write a prog to print all num in a given range with unique digits 

*******************************************************************************/
// accenture 37
#include <bits/stdc++.h>

using namespace std;

void uniqueNums(int a, int b){
   for (int i=a ; i<=b ; i++)
    {
        int num = i;
        bool visited[10] = {false};
 
       
        while (num)
        {
           
            if (visited[num % 10])
                break;
 
            visited[num%10] = true;
 
            num = num/10;
        }
 
        
        if (num == 0)
           cout<< i<<" ";
    }
}



int main()
{

   
    int a, b;
    cin>>a>>b;
    
    
   uniqueNums(a, b);
  

    return 0;
}
