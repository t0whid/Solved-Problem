#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];

using namespace std;

int main()
{
    ll a, b, c;
    while(cin>>a>>b>>c)
    {
        ll x, y, z, i=1, sum=0;
        while(1)
        {
            x=i*1;
            y=i*2;
            z=i*4;
            //cout<<"x "<<x<<" y "<<y<<" z "<<z<<endl;
            if(x>a || y>b || z>c)
            {
                break;
            }
            sum=x+y+z;
            i++;
            //cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}
 
