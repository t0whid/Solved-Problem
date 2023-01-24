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
    while(cin>>n)
    {
        ll p, q, cnt=0;
        while(n--)
        {
            cin>>p>>q;
            if(q-p>=2) cnt++;
        }
        pf(cnt);
    }
    return 0;
}


 
