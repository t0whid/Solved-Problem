
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
ll arr[N], i, j, bul=0, cnt=0, fib[N];
using namespace std;

ll getFibonacci(ll num) {
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
	ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		ll a, b, c;
		cin>>a>>b>>c;
		if(c%3==0) cout<<a<<endl;
		else if(c%3==1) cout<<b<<endl;
		else {
			ll x = a^b;
			cout<<x<<endl;
		}
	}
    return 0;
}

/*
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
*/
