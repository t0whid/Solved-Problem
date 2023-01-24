#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m, z;
    while(cin>>n>>m>>z)
    {
        ll x=0, i;
        for(i=1; i<=z; i++)
        {
            if(m*i>z) break;
            if((m*i)%n==0)
            {
                x++;
            }
        }
        cout<<x<<endl;

    }
}
