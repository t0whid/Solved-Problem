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
ll a[N], i, j;
using namespace std;
int main()
{
    long long ans=1;
    ll n, k, b;
    cin>>n>>k;
        long long y=1111111111111111111;
        for(i=0;i<k;i++)
        {
            cin>>a[i];
            b=n%a[i];
            if(b<=y){
                y=b;
            ans=i+1;
            }

        }
        cout<<ans<<" "<<n/a[ans-1]<<endl;

    return 0;
}
 
