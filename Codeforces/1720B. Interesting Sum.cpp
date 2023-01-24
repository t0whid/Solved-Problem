/*  Allah, increase me in knowledge.
            Towhid Hasan    	        */

#include<bits/stdc++.h>
using namespace std;
#define fast_io  					ios_base::sync_with_stdio(0); cin.tie(0)
#define ll							long long
#define pi							acos(-1.0)
#define pii							pair<ll,ll>
#define mp							make_pair
#define cln(x)						memset(x, 0, sizeof(x))
#define cln_set(x)					memset(x, -1, sizeof(x))
#define upper(str)					transform(str.begin(), str.end(), str.begin(), ::toupper)
#define lower(str)					transform(str.begin(), str.end(), str.begin(), ::tolower)
bool check = true;
ll ans = 0, sub = 0, cur = 0, pos = 0, cnt = 0, sum = 0, mul = 0;

void solve()
{
	ll n;
	cin>>n;
	ll arr[n+1];
	for(ll i=0; i<n; i++) cin>>arr[i];
	sort(arr, arr+n);
	ll x = arr[n-1] - arr[0];
	ll y = arr[n-2] - arr[1];
	cout<<x+y<<endl;
}

int main()
{
    fast_io;
    int tc;
    cin>>tc;
    while(tc--)
        solve();
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



int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

*/


















