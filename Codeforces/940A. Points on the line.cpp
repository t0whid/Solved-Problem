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
const int N=123;
int a[N], i, j;
using namespace std;
int main()
{
    ll n, d, cnt, df, mx=0;
    sff(n,d);
    for(i=0; i<n; i++) sf(a[i]);
    sort(a, a+n);
    for(i=0; i<n; i++)
    {
        cnt=0, df=0;
        for(j=i; j<n; j++)
        {
            df+=a[j+1]-a[j];
            if(df<=d)
            {
                cnt++;
                mx=max(mx,cnt);
            }
        }
    }
    pf(n-mx);
    return 0;
}






 
