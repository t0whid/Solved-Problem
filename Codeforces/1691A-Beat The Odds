/*  Allah, increase me in knowledge.
            Towhid Hasan    	        */

#include<bits/stdc++.h>
using namespace std;
#define fast_io  			ios_base::sync_with_stdio(0); cin.tie(0);
#define ll					long long
#define pi					acos(-1.0)
#define cln(x)				memset(x, 0, sizeof(x))
#define cln_set(x)			memset(x, -1, sizeof(x))
#define upper(str)			transform(str.begin(), str.end(), str.begin(), ::toupper);
#define lower(str)			transform(str.begin(), str.end(), str.begin(), ::tolower);

const int N=1e5+5, M=100;
ll arr[N], i, j, bul=0, cnt=0, fib[N];
bool check = true;
ll nodes, edges, costs;
//vector<ll>edges[20009];
//vector<ll>costs[N];
//vector<ll> ::iterator it;
bool vis[N] = {};
bool node_type[N] = {};
ll dis[N];
//vector<ll> adj[N];
//vector<ll>adj[N];
ll x, y, u, n, m, ans, sub, cur = 0, pos =0;

/* ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}  */

/* ll lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
} */

void solve()
{
    cin>>n;
    cur =0;
    pos = 0;
    for(i=0; i<n; i++)
	{
		cin>>x;
		if(x&1) cur++;
		else pos++;
	}
	ans = min(cur,pos);
	cout<<ans<<endl;
}

int main()
{
    fast_io;
    int tc;
    cin>>tc;
    while(tc--) solve();
    return 0;
}

