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
    while(cin>>n)
    {
        ll i, ar[1000], sum=0, cnt=0, t=1;
        for(i=0; i<n; i++) { sf(ar[i]); sum+=ar[i]; }
        sort(ar, ar+n);
        ll x= sum/2;
        if(sum%2) t=0;
        for(i=n-1; i>=0; i--)
        {
            sum-=ar[i];
            if(!t)
            { cnt++; if(sum<=x) break; }
            else { cnt++; if(sum<x) break; }
        }
        pf(cnt);
    }
    return 0;
}







 
