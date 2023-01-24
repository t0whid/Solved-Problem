#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
using namespace std;
int main()
{
    ll k, w, n;
    while(scanf("%lld%lld%lld", &k, &n, &w)==3)
    {
        ll t=(w*(w+1)/2)*k;
        ll ans=t-n;
        if(ans<=0) ans=0;
        printf("%lld\n", ans);
    }
    return 0;
}

 
