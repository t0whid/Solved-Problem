#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)          scanf("%lld %lld %lld",&a,&b,&c)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
#define pb                   push_back
#define cln(x)               memset(x, 0, sizeof(x))
const int N=123456;
int arr[N], i, j;
using namespace std;
int main()
{
    ll n, k, a, b, ans1=0, ans2=0, ans=0;
    sff(n,k);
    sff(a,b);
    ans1=(n-1)*a;
    if(k==1) return cout<<ans1<<endl, 0;
    while(n!=0 && n!=1)
        {
            if(n%k==0)
            {
                if (b<a*(n-n/k))
                    ans+= b;
                else
                    ans+= a*(n-n/k);
                n=n/k;
            }
            else
            {
                ans+=((n%k)*a);
                n=n-(n%k);
            }
        }
    if(n==0) ans-=a;
    pf(ans);
    return 0;
}







 
