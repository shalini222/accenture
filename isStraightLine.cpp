/******************************************************************************

      Find out if the given set of points are on a straight line or not. If the points are on a straight line, then return the equation. If not, then return 0.                       

*******************************************************************************/
// Accenture 16
#include <bits/stdc++.h>

using namespace std;

bool isStraight(vector<pair<int, int>>v, int t){
  
  
      int x0= v[0].first;
      int x1= v[0].second;
      int y0= v[1].first;
      int y1= v[1].second;
      
      int dx = x1-x0;
      int dy = y1-y0;
      
      for(int i = 0; i<t; i++){
          
          
          int x = v[i].first;
          int y = v[i].second;
          
          
          if((x-x1)*dy != (y-y1)*dx){
              cout<<"0";
              return false;
          }
      }
    
     cout<<"1x-1y=0";
    return true;
    
    
    
}


int main()
{

    vector<pair<int, int>> v;
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int a,b;
        cin >> a;
        cin >> b;
        v.push_back({a, b});
    }
        
    isStraight(v, t);
    return 0;
}






