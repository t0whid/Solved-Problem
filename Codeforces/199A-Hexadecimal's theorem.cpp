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
#define nl                   printf("\n");
const int N=123456;
ll arr[N], ar[N], i, j, bul=0, cnt=0, fib[N];
using namespace std;

ll getFibonacci(ll num)
{
    fib[0] = 0;
    fib[1] = 1;
    for(i=2; i<=num; i++)
    {
        fib[i] = fib[i-1] + fib [i-2];
    }
    return fib[num];
}

int main()
{
    ll n;
    sf(n);
    //cout<<0<<" "<<0<<" "<<n<<endl;
    for(i=0; i<n; i++) cin>>arr[i];
    ll sum=0;
    for(i=0; i<n; i++)
    {
		sum+=arr[i];
		ar[i] = sum;
		cout<<i<<" "<<ar[i]<<endl;
    }

}

/*
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
*/
