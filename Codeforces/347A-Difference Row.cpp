
/* Simplicity is the best way
	Towhid Hasan 			*/
#include<bits/stdc++.h>
using namespace std;
#define ll					long long
#define pi					acos(-1.0)
#define cln(x)				memset(x, 0, sizeof(x))
#define cln_set(x)			memset(x, -1, sizeof(x))
const int N=100005;
const int M=2005;
ll nodes, edges, costs = 0, x, y, u;
ll arr[N], i, j, bul=0, cnt=0, fib[N], n;
string str;
//vector<int>edges[N];
//vector<ll>costs[N];
//vector<ll> ::iterator it;
bool vis[N] = {};
bool node_type[N] = {};
ll dis[N];
//vector<ll> adj[N];


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

	cin>>n;
	for(i=0; i<n; i++) {
		cin>>arr[i];
	}
	sort(arr, arr+n);
	swap(arr[0], arr[n-1]);
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
    return 0;
}



