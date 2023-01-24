#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];

using namespace std;

int main()
{
    ll n;
    while(cin>>n)
    {
        vector<ll>v1;
        vector<ll>v2;
        ll x, y, i, v;
        char c, d;
        cin>>x;
        for(i=0; i<x; i++)
        {
            cin>>v;
            v1.push_back(v);
        }
        cin>>y;
        for(i=0; i<y; i++)
        {
            cin>>v;
            v1.push_back(v);
        }
        ll m, k=1,s=0;
        m=v1.size();
        sort(v1.begin(), v1.end());
        //k=v2.size();
        for(i=0; i<m; i++)
        {
            if(v1[i]!=v1[i+1])
            {
                s+=v1[i];
            }
            //cout<<v1[i]<<" ";
        }
        //if(v1[m-2]!=v1[m-1]) s=s+v1[m-1];
        if((n*(n+1)/2)==s) cout<<"I become the guy."<<endl;
        else cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
