/* 	Shoot for the Goal
		Towhid Hasan 		*/

#include<bits/stdc++.h>
using namespace std;
#define fast_io  					ios_base::sync_with_stdio(0); cin.tie(0)
#define lng							long long
#define pi							acos(-1.0)
#define cln(x)						memset(x, 0, sizeof(x))
#define cln_set(x)					memset(x, -1, sizeof(x))
#define ssort(x)					sort(x.begin(), x.end());
#define upper(str)					transform(str.begin(), str.end(), str.begin(), ::toupper)
#define lower(str)					transform(str.begin(), str.end(), str.begin(), ::tolower)
bool check = true;
lng ans, sub = 0, cur = 0, pos = 0, sum = 0, mul = 0;

void solve()
{
    int n, cnt=0, cnt1=0, cnt0=0;
    cin>>n;
	int x;
    for(int i=0; i<n; i++)
    {
    	cin>>x;

        if(x%2==i%2) cnt++;
        else {
			if(x%2) cnt1++;
			else cnt0++;
        }

    }
    int u = n - cnt;
    if(u == 0) cout<<0<<endl;
    else if(cnt1+cnt0+cnt!= n) cout<<-1<<endl;
    else if(cnt0==cnt1) cout<<cnt0<<endl;
    else cout<<-1<<endl;

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

 
