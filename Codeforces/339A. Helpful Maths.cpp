#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];

using namespace std;

int main()
{
    vector<ll>v;
    ll x;
    char c;
    while(1)
    {
        scanf("%lld%c", &x, &c);
        v.push_back(x);
        if(c!='+') break;
    }
    sort(v.begin(), v.end());
    for(ll i=0; i<v.size(); i++)
    {
        cout<<v[i];
        if(i<v.size()-1) cout<<"+";
    }
    cout<<endl;
    return 0;
}
 
