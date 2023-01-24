#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;
bool primes(ll n)
{
    if(n<2) return false;
    else if(n==2) return true;
    ll limit=sqrt(n);
    if(n%2==0) return false;
    for(ll j=3; j<=limit; j+=2)
    {
        if(n%j==0) return false;
    }
    return true;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        ll sq=sqrt(x);
        if(sq*sq==x&&primes(sq)==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
 
