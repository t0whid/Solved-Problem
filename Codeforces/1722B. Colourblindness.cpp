/*  Allah, increase me in knowledge.
            Towhid Hasan    	        */

#include<bits/stdc++.h>
using namespace std;
#define fast_io  					ios_base::sync_with_stdio(0); cin.tie(0)
#define ll							long long int
#define pi							acos(-1.0)
#define pii							pair<ll,ll>
#define mp							make_pair
#define pb							push_back
#define _							<<" "
#define cln(x)						memset(x, 0, sizeof(x))
#define cln_set(x)					memset(x, -1, sizeof(x))
#define upper(str)					transform(str.begin(), str.end(), str.begin(), ::toupper)
#define lower(str)					transform(str.begin(), str.end(), str.begin(), ::tolower)
bool check = true;
ll ans = 0, sub = 0, cur = 0, pos = 0, cnt = 0, sum = 0, mul = 0;

void solve()
{
    ll n, i, j, x;
    cin>>n;
    ll arr[n+1];
    string s, s2;
    //s2 = "Timru";
    cin>>s>>s2;
    for(i=0; i<n; i++)
    {
        if(s[i]=='B' or s[i]=='G') s[i]='X';
        if(s2[i]=='B' or s2[i]=='G') s2[i]='X';
    }
    //cout<<s<<" "<<s2<<endl;
    //sort(s.begin(), s.end());
    //cout<<s<<endl;
    if(s==s2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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
*/























