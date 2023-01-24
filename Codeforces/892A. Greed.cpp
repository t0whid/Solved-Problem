#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
using namespace std;
ll ar1[100000], ar2[100000];
int main()
{
    ll n;
    while(sf(n)==1)
    {
        ll i, sum=0, s=0;
        for(i=0; i<n; i++)
        {
            sf(ar1[i]);
            sum+=ar1[i];
        }
        for(i=0; i<n; i++)
        {
            sf(ar2[i]);
        }
        sort(ar2, ar2+n);
        s=ar2[n-1]+ar2[n-2];
        if(s>=sum) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

 
