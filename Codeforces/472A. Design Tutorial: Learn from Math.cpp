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
        ll a, b,i;
        for(i=2; i<n; i++)
        {
            if(primes[i]==0)
            {
                a=i;
                b=n-a;
                if(primes[b]==0)
                {
                    break;
                }
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}



 
