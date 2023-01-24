#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
#define pb		     push_back
using namespace std;
int main()
{
    ll n;
    while(sf(n)==1)
    {
        ll i, j, k, cnt=0;
        for(i=1; i<=n; i++)
        {
            //cout<<i<<" i "<<endl;
            for(j=i; j<=n; j++)
            {
                k=i^j;
                //cout<<j<<" j "<<endl;
                //cout<<k<<" k "<<endl;
                    if((i+j)>k and j<=k and k<=n)
                    {
                        cnt++;
                    }
            }
        }
        pf(cnt);
    }
    return 0;
}







 
