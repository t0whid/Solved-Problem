#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
#define pb		     push_back
const int N=123456;
int arr[N];

using namespace std;
int main()
{
    ll n;
    while(sf(n)==1)
    {
        ll i, j;
        for(i=1; i<=n; i++)
        {
            ll x;
            sf(x);
            arr[x]++;
        }
        ll ans=1, cnt;
        for(i=2; i<N; i++)
        {
            cnt=0;
            for(j=i; j<N; j+=i)
            {
                cnt+=arr[j];
            }
            ans=max(ans,cnt);
        }
        pf(ans);
    }
    return 0;
}







 
