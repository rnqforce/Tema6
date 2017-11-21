#include <bits/stdc++.h>

using namespace std;

int gcd(int a , int b)
{
    int r=a%b;
    while(a)
    {
        a=b;
        b=r;
        r=a%b;
    }
}

int main()

{
    int n;

    list<int> v;

    cin>>n;

    for(int i = 0 ; i < n ; i++){
            int x;
          cin>>x;

        v.push_back(x);

        }
    v.unique();
    int a=v.front();
    list<int>::iterator it;
    for( ; i< n ; i++)
        cout<<v.front()+1;
}

