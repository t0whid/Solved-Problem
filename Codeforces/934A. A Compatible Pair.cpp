#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)          scanf("%lld %lld %lld",&a,&b,&c)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
#define pb		             push_back
#define cln(x)               memset(x, 0, sizeof(x))
using namespace std;
int main()
{
    ll n, m;
    while(sff(n,m)==2)
    {
        ll a[60], b[60], i, j, mn=1e18, mx, k;
        for(i=0; i<n; i++)
            sf(a[i]);
        for(i=0; i<m; i++)
            sf(b[i]);
        for(i=0; i<n; i++)
        {
            mx=-1e18;
            for(k=0; k<n; k++)
            {
                if(k!=i)
                {
                    for(j=0; j<m; j++)
                    {
                        ll c=a[k]*b[j];
                        mx=max(c,mx);
                    }
                }
            }
            mn=min(mn,mx);
        }
        pf(mn);
    }
    return 0;
}







 
