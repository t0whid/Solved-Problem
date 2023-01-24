/*  Allah, increase me in knowledge.
            Towhid Hasan    	        */

#include<bits/stdc++.h>
using namespace std;
#define fast_io  					ios_base::sync_with_stdio(0); cin.tie(0)
#define ll							long long int
#define pi							acos(-1.0)
#define pii							pair<ll,ll>
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
    vector<string>s1;
    vector<string>s2;
    vector<string>s3;
    ll a1[n+1], a2[n+1], a3[n+1];
    cln(a1);
    cln(a2);
    cln(a3);
    map<string, ll>mp;

    ll c1=0, c2=0, c3=0;
    for(i=0; i<n; i++)
    {
        string x;
        cin>>x;
        s1.push_back(x);
        mp[x]++;
    }
    for(i=0; i<n; i++)
    {
        string x;
        cin>>x;
        s2.push_back(x);
        mp[x]++;

    }
    for(i=0; i<n; i++)
    {
        string x;
        cin>>x;
        s3.push_back(x);
        mp[x]++;

    }
    for(i=0; i<n; i++)
	{
		if(mp[s1[i]]==1) c1+=3;
		if(mp[s1[i]]==2) c1+=1;
	}for(i=0; i<n; i++)
	{
		if(mp[s2[i]]==1) c2+=3;
		if(mp[s2[i]]==2) c2+=1;
	}for(i=0; i<n; i++)
	{
		if(mp[s3[i]]==1) c3+=3;
		if(mp[s3[i]]==2) c3+=1;
	}
    //for(i=0; i<n; i++) cout<<a1[i]<<endl;
    cout<<c1<<" "<<c2<<" "<<c3<<endl;


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


























