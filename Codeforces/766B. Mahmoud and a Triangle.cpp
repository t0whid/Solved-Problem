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
        vector<ll>v;
        ll x, i, f=0;
        for(i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(i=0; i<n-2; i++)
        {
            if(v[i]+v[i+1]>v[i+2] && v[i+2]+v[i+1]>v[i] && v[i]+v[i+2]>v[i+1])
            {
                f=1;
                break;
            }
        }
        if(f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
 
