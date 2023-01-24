#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];

using namespace std;

int main()
{
    ll t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll x=180-n;
        if(360%x==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
 
