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
#define len					 str.size()
const int N=12345678;
ll arr[N], i, j, bul=0, cnt=0;
using namespace std;

ll coins[] = { 100, 20, 10 , 5, 1 };
ll dp [N] = {0};

ll min_coins(ll ammounts, ll total_coins)
{
	for( i=0; i<=ammounts; i++ )
    dp[i] = INT_MAX;

    dp[0] = 0;

    for( i=1; i<=ammounts; i++ )
    {
		for( j=0; j<total_coins; j++ )
		{
			 if(coins[j] <= i) dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
		}
    }

	return dp[ammounts];

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	ll ammounts;
	cin>>ammounts;
	ll ans = 0;
	for(i=0; i<5; i++)
	{
		if( ammounts >= coins[i])
		{
			cnt = ammounts/coins[i];
			ans+=cnt;
			ammounts = ammounts % coins[i];
			//cout<<ammounts<<endl;
		}

	}


    cout<<ans<<endl;

    return 0;
}

/*
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
*/
