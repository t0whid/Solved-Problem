#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];

using namespace std;

int main()
{
    ll a, b;
    while(cin>>a>>b)
    {
        ll x;
        x=abs(a-b);
        if(a==0 && b==0) cout<<"NO"<<endl;
        else{
        if(x==0 || x==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
    }
    return 0;
}
 
