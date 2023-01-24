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
ll ans = 0, sub = 0, cur = 0, pos = 0, cnt = 0, sum = 0, mul = 0;

void solve()
{
    int a, b, c, d, arr[4];
    cin>>a>>b>>c>>d;

    arr[0] = a;
    arr[1] = b;
    arr[2] = d;
    arr[3] = c;

    for(int i=0; i<4; i++)
    {
        a = arr[i];
        b = arr[(i+1)%4];
        d = arr[(i+2)%4];
        c = arr[(i+3)%4];
        if( (a<b && a<c && b<d && c<d))
		{
			cout<<"YES"<<endl;
			return;
		}
    }
	cout<<"NO"<<endl;
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
s.erase (i,1);
*/

















