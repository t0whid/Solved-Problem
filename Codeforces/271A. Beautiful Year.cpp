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
        ll x, f=0;
        vector<ll>v;
        ll r;
        set<ll>mys;
        while(1)
        {
            x=n+1;
            while(x)
            {
            r=x%10;
            x/=10;
            mys.insert(r);
            }
            if(mys.size()==4)
            break;
            n++;
            mys.clear();
        }
        cout<<++n<<endl;
    }
    return 0;
}



 
