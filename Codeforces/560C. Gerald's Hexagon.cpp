#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)          scanf("%lld %lld %lld",&a,&b,&c)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
#define pb                   push_back
#define cln(x)               memset(x, 0, sizeof(x))
const int N=123456;
ll arr[N], i, j;
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, c, d, e, f;
    cin>>a>>b>>c>>d>>e>>f;
    ll ans=(a+b+c)*(a+b+c)-a*a-c*c-e*e;
    cout<<ans<<endl;
    return 0;
}







 