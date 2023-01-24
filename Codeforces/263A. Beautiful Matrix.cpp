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
    ll a[5][5];
    ll i, j, b, c, x;
    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
    {
            sf(a[i][j]);
            if(a[i][j]!=0)
            {
                x=a[i][j];
                b=i;
                c=j;
            }
    }
    ll ans=abs(b-2)+abs(c-2);
    pf(ans);
    return 0;
}



 
