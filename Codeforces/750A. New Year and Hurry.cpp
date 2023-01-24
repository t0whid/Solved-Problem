#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;

int main()
{
    ll n, k;
    while(cin>>n>>k)
    {
        ll ans=0, x, i, time=0, sum=0;
        x=240-k;
        for(i=1; i<=n; i++)
        {
            time=time+5;
            sum=sum+time;
            if(sum>x) break;

        }
        cout<<i-1<<endl;
    }
    return 0;
}
 
