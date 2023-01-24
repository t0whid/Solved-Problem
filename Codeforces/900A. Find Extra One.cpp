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
        ll x, y, cnt1=0, cnt2=0;
        while(n--){
        sff(x,y);
        if(x>0) cnt1++;
        if(x<0) cnt2++;
        }
        if(cnt1<=1 || cnt2<=1) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
 
