/*  Allah, increase me in knowledge.
            Towhid Hasan    	        */

#include<bits/stdc++.h>
using namespace std;
#define fast_io  					ios_base::sync_with_stdio(0); cin.tie(0)
#define ll							long long int
#define pi							acos(-1.0)
#define pii							pair<ll,ll>
#define mp							make_pair
#define cln(x)						memset(x, 0, sizeof(x))
#define cln_set(x)					memset(x, -1, sizeof(x))
#define upper(str)					transform(str.begin(), str.end(), str.begin(), ::toupper)
#define lower(str)					transform(str.begin(), str.end(), str.begin(), ::tolower)
bool check = true;
ll ans = 0, sub = 0, cur = 12, pos = 0, cnt = 0, sum = 0, mul = 0, i;

void solve()
{
    ll n, k;
    cin>>n;
    ll ar[12];
    cln(ar);
    sum = 0;
    while(n--)
	{
		ll x, y;
		cin>>x>>y;
		if(ar[x]<y) ar[x] = y;

	}
	for(i=0; i<9; i++) sum+=ar[i];
	cout<<sum<<endl;
}

signed main()
{
    fast_io;
    int tc;
    cin>>tc;
    while(tc--)
        solve();
    return 0;
}




























