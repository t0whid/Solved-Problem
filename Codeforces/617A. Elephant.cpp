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
        ll ans=0;
        if(n%5==0) ans=n/5;
        else ans=(n/5)+1;
        cout<<ans<<endl;
    }
    return 0;
}
