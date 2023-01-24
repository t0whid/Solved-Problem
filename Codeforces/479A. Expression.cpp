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
    ll a, b, c;
    while(cin>>a>>b>>c)
    {
        ll x, y, z, s, n, mx=0;
        x=a+b*c;
        y=a*(b+c);
        z=a*b*c;
        s=(a+b)*c;
        n=a+b+c;
        mx=max(mx,x);
        mx=max(mx,y);
        mx=max(mx,z);
        mx=max(mx,s);
        mx=max(mx,n);
        cout<<mx<<endl;
    }
    return 0;
}


 
