#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)

#define pff(a,b)             printf("%lld %lld\n",a,b)
using namespace std;
int main()
{
    ll yc, bc, y, g, b;
    while(sff(yc,bc)==2)
    {
        sff(y,g);
        sf(b);
        ll ans1, ans2, ans, yb, gb, bb;
        yb=y*2+g;
        bb=b*3+g;
        ans1=yb-yc;
        ans2=bb-bc;
        //cout<<ans1<<" "<<ans2<<endl;
        if(ans1<0) ans1=0;
        if(ans2<0) ans2=0;
        ans=ans1+ans2;
        cout<<ans<<endl;
    }
    return 0;
}
