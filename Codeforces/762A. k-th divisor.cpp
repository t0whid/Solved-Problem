#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];
using namespace std;

int main()
{
    ll n, k;
    while(cin>>n>>k)
    {
        vector<ll>my_vec;
        ll i, j;
        for(i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                my_vec.push_back(i);
                if(i!=(n/i)) my_vec.push_back(n/i);
            }
        }
        sort(my_vec.begin(), my_vec.end());
        ll x=my_vec.size();
        if(k>x) cout<<-1<<endl;
        else cout<<my_vec[k-1]<<endl;
    }
    return 0;
}
 
