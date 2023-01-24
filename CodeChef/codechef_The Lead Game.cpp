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
ll ans = 0, sub = 0, cur = 0, pos = 0, cnt = 0, sum = 0, mul = 0, i;

void solve()
{
    ll n;
    cin>>n;
    ll lead_no=0, lead_dif=0, p1=0, p2=0;
    for(i=0; i<n; i++)
	{
		ll x, y;
		cin>>x>>y;
		p1+=x;
		p2+=y;
		ll dif = abs(p1-p2);
		if(lead_dif<dif)
		{
			lead_dif = dif;
			p1>p2?lead_no=1:lead_no=2;
		}
	}
	cout<<lead_no<<" "<<lead_dif<<endl;
}

signed main()
{
    fast_io;
    /*int tc;
    cin>>tc;
    while(tc--)*/
        solve();
    return 0;
}





















