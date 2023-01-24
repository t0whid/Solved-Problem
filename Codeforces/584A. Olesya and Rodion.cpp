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
        ll i;
        if(k<=9)
        {
            for(i=1; i<=n; i++)
            {
                cout<<k;
            }
            cout<<endl;
        }
        else
        {
            if(n==1) cout<<-1<<endl;
            else{
            for(i=1; i<n; i++)
            {
                cout<<4;
            }
            cout<<0<<endl;
            }
        }
    }
    return 0;
}
