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
        ll c=0, r, m, d;
        while(n!=0)
        {
            r=n%2;
            if(r==1) c++;
            n=n/2;
        }
        cout<<c<<endl;
    }
    return 0;
}
 
