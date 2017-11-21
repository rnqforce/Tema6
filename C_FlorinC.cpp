#include<bits/stdc++.h>

using namespace std;

int gcd(int a , int b)
{
    int r=a%b;
    while(r)
    {
        a=b;
        b=r;
        r=a%b;
    }

    return b;
}

 int v[2001];

int main()
{
    int n,x=0;
     cin>>n;
    for(int i=0 ; i< n ;i++)
    {
     cin>>v[i];if(v[i]==1)x++;

    }
    if(x!=0){
        cout<<n-x;}
     else{
    int k,ans=n+1;


      for(int i=0 ; i < n ; i++)
    {
        k=v[i];
        for(int j=i ; j< n ; j ++){
            k=gcd(k,v[j]);
            if(k==1)
                ans=min(ans,j-i);}
    }
    if(ans>n)
        cout<<-1;
    else
        cout<<ans+n-1;
     }
}
