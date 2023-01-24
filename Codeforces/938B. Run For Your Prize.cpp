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
const int N=1e6;
int arr[N], i, j;
using namespace std;
int main()
{
    ll n;
    sf(n);
    for(i=1; i<=n; i++) sf(arr[i]);
    arr[0]=1;
    ll y=N;
    ll x=N/2, m1=0, m2=0;
    for(i=1; i<=n; i++)
    {
        if(arr[i]<=x)
        {
            m1+=abs(arr[i]-arr[i-1]);
        }
        else break;
    }
    for(i=n; i>=1; i--)
    {
        if(arr[i]>=x)
        {
            m2+=abs(y-arr[i]);
            y=arr[i];
            //cout<<m2<<endl;
        }
        else break;
    }
    ll ans=max(m1,m2);
    if(ans==500000) ans--;
    pf(ans);

    return 0;
}







 
