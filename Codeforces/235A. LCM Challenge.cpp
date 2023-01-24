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
    while(cin>>n)
    {
        ll ans, x, y, z;
        if(n%2==1) {
            x=n;
            y=n-2;
            z=n-1;
        }
        else if(n%3==0)
        {
            x=n-1;
            y=n-2;
            z=n-3;
        }
        else
        {
            x=n;
            y=n-1;
            z=n-3;
        }
        ans=x*y*z;
        if(n<3) cout<<n<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
 
