/* 	Shoot for the Goal
		Towhid Hasan 		*/

#include<bits/stdc++.h>
using namespace std;
#define fast_io  					ios_base::sync_with_stdio(0); cin.tie(0)
#define lng							long long int
#define pi							acos(-1.0)
#define cln(x)						memset(x, 0, sizeof(x))
#define cln_set(x)					memset(x, -1, sizeof(x))
#define upper(str)					transform(str.begin(), str.end(), str.begin(), ::toupper)
#define lower(str)					transform(str.begin(), str.end(), str.begin(), ::tolower)
bool check = true;
lng ans, sub = 0, cur = 0, pos = 0, cnt = 0, sum = 0, mul = 0;

void solve()
{
	int n;
	cin>>n;
	if(n==10000)
	{
		cout<<1<<endl<<n<<endl;
		return;
	}
	int x = 1000;
	vector<int>v;
	while(n)
	{
		int rem = n % x;
		int u = n - rem;
		int y = n / x;
		x /=10;
		if(u > x) v.push_back(u);
		if(rem == 0) break;
		n = rem;
	}
	int si = v.size();
	cout<<si<<endl;
	for(int i=0; i<si; i++)
		cout<<v[i]<<" ";
	cout<<endl;
}

signed main()
{
    fast_io;
    int tc;
    cin>>tc;
    while(tc--) solve();
    return 0;
}


/*
sort(v.begin(), v.end());
lower_bound (v.begin(), v.end(), x)
upper_bound (v.begin(), v.end(), x)
lower_bound(v.begin(), v.end(), x) - v.begin()
upper_bound(v.begin(), v.end(), x) - v.begin()
vector<int> v(arr, arr + n); -> push array in a vector
ll nodes, edges, costs;
vector<ll>edges[20009];
vector<ll>costs[N];
vector<ll> ::iterator it;
bool vis[N] = {};
bool node_type[N] = {};
ll dis[N];
vector<ll> adj[N];
vector<ll>adj[N];

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

*/



 
