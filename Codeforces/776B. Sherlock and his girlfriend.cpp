                           /*This is "Towhid"*/
                            /* LoopBreakers */
                             /*Dream Seeker*/

#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
#define N 1000000
int primes[N];
using namespace std;
void sieve()
{
    int i, j;
    for(i=0;i<N;i++)
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
    while(sf(n)==1)
    {
        cout << (n<3 ? 1:2) << endl;
        for(int i=2; i<=n+1; i++)
        {
            if(primes[i]) cout<<1<<" ";
            else cout<<2<<" ";
        }

    }
    return 0;
}


 
