#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
using namespace std;
int main()
{
    ll n;
    while(scanf("%lld", &n)==1)
    {
        ll s1=0, s2=0, x, y;
        if(n%2==0) x=n/2, y=n/2;
        else x=(n/2)+1, y=n/2;
        s1=x*x;
        s2=y*(y+1);
        printf("%lld\n", s2-s1);
    }
    return 0;
}
 
