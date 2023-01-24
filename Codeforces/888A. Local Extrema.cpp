#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
using namespace std;
int main()
{
    ll n;
    while(sf(n)==1)
    {
        ll a[1010], i, j, k, l, cnt=0;
        for(i=0; i<n; i++) sf(a[i]);
        for(i=1; i<n-1; i++)
        {
            if(a[i]>a[i-1]&&a[i]>a[i+1]) cnt++;
        }
        for(i=1; i<n-1; i++)
        {
            if(a[i]<a[i-1]&&a[i]<a[i+1]) cnt++;
        }
        printf("%lld\n", cnt);
    }
    return 0;
}
 
