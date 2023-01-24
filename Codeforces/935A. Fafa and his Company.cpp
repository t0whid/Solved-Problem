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
int arr[N], i, j;
using namespace std;
int main()
{
    ll n, cnt=0, x;
    sf(n);
    for(i=1; i<=n; i++)
    {
        x=n-i;
        if(x%i==0 && x!=0) cnt++;
    }
    pf(cnt);
    return 0;
}







 
