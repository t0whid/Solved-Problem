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
ll nodes, edges, costs, x, y, u;
ll arr[N], i, j, bul=0, cnt=0, fib[N], n;
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
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        if(arr[i] != arr[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
   return 0;
}


