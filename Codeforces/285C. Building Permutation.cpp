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
const int N=1234567;
ll arr[N], i, j;
using namespace std;
int main()
{
    ll n;
    sf(n);
    for(i=0; i<n; i++) sf(arr[i]);
    sort(arr, arr+n);
    ll ans=0;
    for(i=0; i<n; i++)
    {
        ans+=abs(arr[i]-(i+1));
    }
    pf(ans);
    return 0;
}







 
