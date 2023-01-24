#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];

using namespace std;

int main()
{
    ll n;
    while(cin>>n)
    {
        ll i, x=-1+sqrt(1+8*n);
        ll sum=0;
        x=x/2;
        cout<<x<<endl;
        for(i=1; i<x; i++)
        {
            cout<<i;
            sum=sum+i;
            if(i<x) cout<<" ";
        }
        cout<<n-sum<<endl;
    }
    return 0;
}
 
