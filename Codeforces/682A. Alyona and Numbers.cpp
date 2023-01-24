#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;

int main()
{
    ll n, m;
    while(cin>>n>>m)
    {
       ll c=0;
       ll x=max(m,n);
       ll y=min(n,m);
       for(ll i=1; i<=y; i++)
       {
           c+=(x+i)/5-i/5;
       }
       cout<<c<<endl;

    }
    return 0;
}
 
