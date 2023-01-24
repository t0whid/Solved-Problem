#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];

using namespace std;

int main()
{
    ll n;
    while(cin>>n)
    {
        ll cnt=0;
        while(n--)
        {
            ll x, y, z, s=0;
            cin>>x>>y>>z;
            s=x+y+z;
            if(s>1)cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
 
