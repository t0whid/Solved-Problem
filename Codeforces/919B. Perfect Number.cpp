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
    ll k, n, i=1, r;
    ll ar[10100];
    ll x=18;
    while(1){
    n=x;
    ll sum=0;
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n/=10;
    }
    if(sum==10) {ar[i]=x;
    i++;}
    if(i>=10001) break;
    x++;
    }
    //for(i=0; i<10001; i++) cout<<ar[i]<<" ";
    while(sf(k)==1)
    {
        ll j;
        j=ar[k];
        pf(j);


    }
    return 0;
}







 
