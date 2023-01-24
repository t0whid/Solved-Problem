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
        ll x;
        ll ans1=0, ans2=0;
        vector<long long>a;
        vector<long long>b;
        vector<long long>c;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(ll i=0; i<n-1; i++)
        {
            cin>>x;
            b.push_back(x);
        }
        for(ll i=0; i<n-2; i++)
        {
            cin>>x;
            c.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        for(ll i=0; i<n-1; i++)
        {
            if(b[i]!=a[i])
            {
                ans1=a[i];
                break;
            }
            else ans1=a[n-1];
        }
        for(ll i=0; i<n-2; i++)
        {
            if(c[i]!=b[i])
            {
                ans2=b[i];
                break;
            }
            else ans2=b[n-2];
        }
        cout<<ans1<<endl<<ans2<<endl;
    }
    return 0;
}
 
