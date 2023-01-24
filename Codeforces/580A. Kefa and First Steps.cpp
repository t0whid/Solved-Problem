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
    ll n;
    while(cin>>n)
    {
        ll i, j, k, l, x=0, sum, cnt=0;
        ll a[100000];
        for(i=0; i<n; i++) sf(a[i]);
        if(n==1) cout<<1<<endl;
        else{
        for(i=0; i<n-1; i++)
        {
            if(a[i]<=a[i+1])
            {
                cnt++;
                x=max(x,cnt);
            }
            else
            cnt=0;
        }
        cout<<x+1<<endl;
        }
    }
    return 0;
}


 
