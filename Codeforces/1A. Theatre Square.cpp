#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;

int main()
{
    ll n, m, a;
    while(cin>>n>>m>>a)
    {
        double x, y;
        x=(double)n/a;
        y=(double)m/a;
        ll ans=ceil(x)*ceil(y);
        cout<<ans<<endl;
    }
    return 0;
}
 
