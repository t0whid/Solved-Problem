#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)          scanf("%lld %lld %lld",&a,&b,&c)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
#define pb		             push_back
#define cln(x)               memset(x, 0, sizeof(x))
const int N=123456;
int arr[N], i, j;
using namespace std;
int main()
{
    ll n, k;
    sff(n,k);
    if(n==1)
    {
        if(k<3)
            return printf("Yes\n"), 0;
        return printf("No\n"), 0;
    }
    if(k>=n)
        return printf("No\n"), 0;
    for(i=1; i<=k; i++)
    {
        if(arr[n%i])
        {
            return printf("No\n"), 0;
        }
        arr[n%i]=1;
    }
    printf("Yes\n");
    return 0;
}






 
