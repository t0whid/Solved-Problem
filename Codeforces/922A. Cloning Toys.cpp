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
    ll x, y;
    while(sff(x,y)==2)
    {
        ll n;
        if(y<2 && x>0) return cout<<"No"<<endl, 0;
        y--;
        n=x-y;
        if(n<0|| n%2)  return cout<<"No"<<endl, 0;
        else cout<<"Yes"<<endl;

    }
    return 0;
}







 
