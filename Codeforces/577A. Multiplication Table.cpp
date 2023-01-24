#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;

int main()
{
    ll n, m;
    while(cin>>n>>m)
    {
        ll ans=0, i;
        if(m==1) ans=1;
        else
        {
            for(i=2; i<=n; i++)
            {
                if(m%i==0 && m/i<=n) ans++;
            }
            if(m<=n) ans=ans+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
 
