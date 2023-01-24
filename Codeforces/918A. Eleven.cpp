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
    ll fib[20], i;
    fib[1]=1; fib[2]=1;
    for(i=3; i<=16; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        //cout<<fib[i]<<endl;
    }
    ll n;
    while(sf(n)==1)
    {
        ll j, x=0;
        for(j=1; j<=n; j++)
        {
            x=0;
            for(i=1; i<=16; i++)
            {
                if(j==fib[i]) {x=1; break;}
            }
            if(x==1) printf("O");
            else printf("o");
        }
        printf("\n");
    }
    return 0;
}







 
