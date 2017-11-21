#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n,k;
     char s[100001];

     cin>>n>>k;

     cin>>s;

     long maxs=0,maxd=0,ok=1;

     for(int i=0 ;i< n&&ok ; i++)
        if(s[i]=='0')
            maxs++;
        else
            ok=0;

        ok=1;

     for(int i=n-1 ;i>= 0&&ok ; i--)
        if(s[i]=='0')
            maxd++;
        else
            ok=0;
            long long max1=0,mx=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                mx++;
            else
            {
                if(mx>max1)
                    max1=mx;

                mx=0;}


        }
        if(k=0)
            cout<<max1;
        else
        if(maxd==n)
            cout<<n*k;
        else
         if(max1>maxs+maxd)
           cout<<max1;
        else
        cout<<maxd+maxs;


}

