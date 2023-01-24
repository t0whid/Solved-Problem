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
        ll x, y, z, sx=0, sy=0, sz=0;
        while(n--)
        {
            cin>>x>>y>>z;
            sx+=x;
            sy+=y;
            sz+=z;
        }
        if(sx==0 && sy==0 && sz==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


 
