#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
using namespace std;
int main()
{
    ll a[6], i, j, k, l=0, sum=0, sm=0, mow=0;
    for(i=0; i<6; i++)
    {
        sf(a[i]);
        sum+=a[i];
    }
    if(sum%2==1) printf("NO\n");
    else
    {
        sm=sum/2;
        for(i=0; i<6; i++)
        {
            for(j=i+1; j<6; j++)
            {
                for(k=j+1; k<6; k++)
                {
                    l=a[i]+a[j]+a[k];
                    if(l==sm)
                    {
                        mow=1;
                        break;
                    }
                }
            }
        }
        if(mow==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
 
