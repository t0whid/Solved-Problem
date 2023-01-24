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
const int N=5555;
int arr[N], i, j, cnt[N];
using namespace std;
int main()
{
    ll n, cn=0,x;
    sf(n);
    for(i=1; i<=n; i++)
    {
        sf(arr[i]);
    }
    if(n<3)
        return cout<<"NO"<<endl, 0;
    ll a=0,b=0,c=0;
    for(i=1; i<=n; i++)
    {
        a=arr[i];
        b=arr[a];
        c=arr[b];
        if(arr[a]==b && arr[b]==c && arr[c]==a) return cout<<"YES"<<endl, 0;
    }

    cout<<"NO"<<endl;

    return 0;
}







 
