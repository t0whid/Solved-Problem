#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
#define for(n)	   	     for(i=0; i<n; i++)
using namespace std;
int main()
{
    ll n, m;
    while(sff(n,m)==2)
    {
        ll cnt=0;
        while(n&&m)
        {
            if(n>m)
            {
                if(n>=2)
                {
                    n-=2;
                    m--;
                    cnt++;
                }
                else
                {
                    break;
                }
            }
                else
                {
                    if(m>=2)
                    {
                        m-=2;
                        n--;
                        cnt++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            pf(cnt);
        }
    return 0;
}



 
