#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
using namespace std;
int main()
{
    ll n, t, d=86400;
    while(sff(n,t)==2)
    {
        ll a[1010];
        ll i, j, k, l, sum=0, ans=0, cnt=0;
        for(i=0; i<n; i++) sf(a[i]);
        for(i=0; i<n; i++)
        {
            sum+=d-a[i];
            if(sum>=t)
            {
                break;
            }
        }
        cout<<++i<<endl;
    }
    return 0;
}
 
