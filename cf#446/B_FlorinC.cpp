#include<bits/stdc++.h>
using namespace std;

int v[1000001];

int main()

{
    ios::sync_with_stdio(false);
    int  n,k=1,s=1;
    scanf("%d",&n);

    for(int i = 0 ; i < n; i ++)
          {
              scanf("%d",&v[i]);
          }
    int minj=n+1;

    for(int i = n-1 ; i >0 ;  --i)
    {
        minj=min(minj,i-v[i]);

        if(i<=minj)
            {
                 k++;

                 }
         minj=min(minj,i-v[i]);

    }
    cout<<k;
}
