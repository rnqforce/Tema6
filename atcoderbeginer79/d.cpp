#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,m,b[201][201],c[11][11];
       cin>>n>>m;

       for(int i = 0 ; i < 10 ; i++)
            for(int j = 0 ; j < 10 ; j++)
               cin>>c[i][j];

      for(int i = 0 ; i < n ; i++)
            for(int j = 0 ; j < m ; j++)
               cin>>b[i][j];

      for (int k = 0; k < 10; ++k)
        for (int i = 0; i < 10; ++i)
            for (int j = 0; j < 10; ++j)
                if (c[i][k] + c[k][j] < c[i][j])
                    c[i][j] = c[i][k] + c[k][j];

            int s=0;

      for(int i = 0 ; i < n ; i++)
            for(int j = 0 ; j < m ; j++)
                if(b[i][j]!=-1)
                  s+=c[b[i][j]][1];
        cout<<s;
}
