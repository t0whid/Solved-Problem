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
int a[N], b[N], i, j;
using namespace std;
int main()
{
    ll n, R=0, L=0, sum1=0, sum2=0, index=0, dif=0;
    sf(n);
    for(i=1; i<=n; i++)
    {
        sff(a[i],b[i]);
        L+=a[i];
        R+=b[i];
    }
    dif=abs(L-R);
    for(i=1; i<=n; i++)
    {
        sum1=(L-a[i]+b[i]);
        sum2=(R-b[i]+a[i]);
        if(abs(sum1-sum2)>dif)
        {
            dif=abs(sum1-sum2);
            index=i;
        }
    }
    pf(index);
    return 0;
}







 
