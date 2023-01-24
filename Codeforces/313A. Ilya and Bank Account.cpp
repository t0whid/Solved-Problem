#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;

int main()
{
    ll n;
    while(cin>>n)
    {
        if(n>=0) cout<<n<<endl;
        else
        {
            ll a=0, b=0;
            a=n%10, b=(n/10)%10;
            if(a<=b) cout<<n/10<<endl;
            else
            {
                ll ans=n/100;
                ans=ans*10+a;
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}
 
