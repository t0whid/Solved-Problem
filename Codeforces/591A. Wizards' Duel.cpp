#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];

using namespace std;

int main()
{
    double l, x, y;
    while(cin>>l>>x>>y)
    {
        double d=0, t=0, ans=0;
        t=l/(x+y);
        d=t*y;
        ans=l-d;
        cout<<setprecision(6)<<ans<<endl;
    }
    return 0;
}
