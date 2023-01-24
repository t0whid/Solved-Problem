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
    ll n, m, i, j, f=0;
    char s;
    scanf("%lld %lld", &n, &m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf(" %c", &s);
            if(s=='C' || s=='M' || s=='Y')
            {
                f=1;
            }
        }
    }
    if(f==1)
        printf("#Color\n");
    else
        printf("#Black&White\n");
    return 0;
}
