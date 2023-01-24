#include<bits/stdc++.h>

#define ll long long
#define pi acos(-1.0)

using namespace std;

int  main()
{
    ll  k2, k3, k5, k6;
    while(cin>>k2>>k3>>k5>>k6)
    {
        ll a, b, c, x, y, z, sum=0;
        x=min(k2, k5);
        y=min(x, k6);
        z=y*256;
        a=k2-y;
        b=min(k3, a);
        c=b*32;
        sum=z+c;
        cout<<sum<<endl;;
    }
    return 0;
}
 
