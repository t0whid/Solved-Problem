#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
#define pb		     push_back
using namespace std;
int main()
{
    ll n;
    while(sf(n)==1)
    {
        ll a[1018], i, j, x, y;
        for(i=0; i<n; i++) sf(a[i]);
        sort(a, a+n);
        for(i=n-1; i>=0; i--)
        {
            x=a[i];
            y=sqrt(a[i]);
            if(a[i]!=y*y) break;
        }
        pf(x);
    }
    return 0;
}




 
