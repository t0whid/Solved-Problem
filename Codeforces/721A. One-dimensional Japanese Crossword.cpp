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
        vector<char>v;
        vector<ll>v1;
        char c;
        ll cnt=0, i;
        for(i=0; i<n; i++)
        {
            cin>>c;
            v.push_back(c);
        }
        for(i=0; i<n; i++)
        {
            if(v[i]=='B') cnt++;
            if(v[i]!='B')
            {
                if(cnt!=0)
                v1.push_back(cnt);
                cnt=0;
            }
            if(i==n-1)
            {
                if(cnt!=0)
                v1.push_back(cnt);
            }
        }
        ll x=v1.size();
        cout<<x<<endl;
        for(i=0; i<x; i++)
        {
            cout<<v1[i];
            if(i<x-1) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
