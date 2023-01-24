#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
using namespace std;
ll find(ll n)
{
    ll sum=n, r;
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n/=10;
    }
    return sum;
}
int main()
{
    ll n;
    while(sf(n)==1)
    {
        ll x, m=n, chk=0, cnt=0, h=1;
        vector<ll>v;
        while(m--)
        {
            h++;
            x=find(m);
            if(x==n)
            {
                chk=1;
                cnt++;
                v.push_back(m);
            }
            if(h>=99) break;
        }
        if(chk==0) printf("0\n");
        else
        {
            printf("%lld\n",cnt);
            for(int i=cnt-1; i>=0; i--)
            {
                printf("%lld\n", v[i]);
            }
        }
    }
    return 0;
}

 
