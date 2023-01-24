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
    ll n, m;
    while(sff(n,m)==2)
    {
        ll a[1001], b[1001], c[1001], d[1001], i, k, l,aa,bb,cc,dd;
        char s[1001][15], s1[1001];
        for(i=0; i<n; i++)
        {
            scanf("%s", s[i]);
            scanf("%lld.%lld.%lld.%lld",&a[i],&b[i],&c[i],&d[i]);
            //printf("%s %lld %lld %lld %lld\n",s[i],a[i],b[i],c[i],d[i]);
        }
        //for(i=0; i<n; i++) printf("%s %lld %lld %lld %lld\n",s[i],a[i],b[i],c[i],d[i]);
        for(l=0; l<m; l++)
        {
            scanf("%s",s1);
            scanf("%lld.%lld.%lld.%lld;",&aa,&bb,&cc,&dd);
            for(i=0; i<n; i++)
            {
                //printf("%s %lld %lld %lld %lld\n",s[i],a[i],b[i],c[i],d[i]);
                if(a[i]==aa&&b[i]==bb&&c[i]==cc&&d[i]==dd)
                {
                    //printf("%s %lld %lld %lld %lld\n",s[i],a[i],b[i],c[i],d[i]);
                    printf("%s %lld.%lld.%lld.%lld; #%s\n",s1,aa,bb,cc,dd,s[i]);
                    break;
                }
            }
        }
    }
    return 0;
}







 
