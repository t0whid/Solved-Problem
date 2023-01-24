#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];

using namespace std;

int main()
{
    ll a, b, c;
    while(cin>>a>>b>>c)
    {
        ll x=(a+b)*2;
        ll z=(a+c)*2;
        ll m=(b+c)*2;
        ll y=a+b+c;
        ll n=min(x,y);
        n=min(n, m);
        n=min(n, z);
        cout<<n<<endl;
    }
    return 0;
}
