#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;

int main()
{
    ll n;
    while(cin>>n)
    {
        ll ans, x;
        if(n==0) ans=1;
        else
        {
            x=n%4;
            if(x==0) ans=6;
            else{
            ans=pow(8,x);
            ans=ans%10;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
 
