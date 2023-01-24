#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
using namespace std;
int main()
{
    ll n;
    while(scanf("%lld", &n)==1)
    {
        ll a, b, sa=0, sb=0, ss=0, ans=0, sss=0;
        while(n--)
        {
            sff(a,b);
            sa-=a;
            sa+=b;
            if(ans<sa) ans=sa;
        }
        printf("%lld\n", ans);
    }
    return 0;
}

 
