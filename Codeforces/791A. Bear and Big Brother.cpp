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
    ll L, B;
    while(sff(L,B)==2)
    {
        ll cnt=0;
        while(L<=B)
        {
            L=L*3;
            B=B*2;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}


 
