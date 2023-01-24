#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
using namespace std;
int main()
{
    ll n;
    while(sf(n)==1)
    {
        ll x, i, cnt5=0, cnt0=0;
        for(i=0; i<n; i++)
        {
            sf(x);
            if(x==5) cnt5++;
            else cnt0++;
        }
        if(cnt5<9 && cnt0>1) printf("0\n");
        else if(cnt0==0) printf("-1\n");

        else
        {
            x=cnt5/9;
            for(i=0; i<x; i++)
            {
                printf("555555555");
            }
            for(i=0; i<cnt0; i++)
            {
                printf("0");
            }
            printf("\n");
        }
    }
    return 0;
}
