#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
#define case(a,b) printf("Case %lld: %ll4d\n",a,b)
#define pf(a) printf("%lld\n",a)
#define pff(a,b) printf("%lld %lld\n",a,b)
using namespace std;
int main()
{
    ll a, b;
    while(sff(a,b)==2)
    {
        ll x=min(a,b), fact=1, i;
        for(i=1; i<=x; i++) fact*=i;
        pf(fact);
    }
    return 0;
}

 
