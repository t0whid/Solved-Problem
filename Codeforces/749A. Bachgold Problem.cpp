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
    ll n, i;
    while(cin>>n)
    {
        if(n%2==0)
        {
            cout<<n/2<<endl;
            for(i=1; i<=n/2; i++)
            {
                cout<<2;
                if(i<n/2) cout<<" ";
            }
            cout<<endl;
        }
        else
        {
            n=n-3;
            cout<<n/2+1<<endl;
            for(i=1; i<=n/2; i++)
            {
                cout<<2<<" ";
            }
            cout<<3<<endl;
        }
    }

    return 0;
}


 
