#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;

int main()
{
    ll n;
    while(cin>>n)
    {
        ll a[100000], i, ans=0;
        for(i=0; i<n; i++) cin>>a[i];
        sort(a, a+n);
        for(i=0; i<n-1; i++)
        {
            ans=a[n-1]-a[i]+ans;
        }
        cout<<ans<<endl;
    }
    return 0;
}
 
