#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];
using namespace std;
void sieve()
{
    int i, j;
    for (i=0;i<N;i++)
        primes[i]=1;
    primes[0]=0,primes[1]=0;
    for (i=2;i<sqrt(N);i++)
        for (j=i*i;j<N;j+=i)
            primes[j] = 0;
}
int main()
{
    sieve();
    ll n;
    while(cin>>n)
    {
        ll m, i;
        for(i=1; i<=1000; i++)
        {
            m=n*i+1;
            if(primes[m]==0) break;
        }
        cout<<i<<endl;
    }
    return 0;
}
 
