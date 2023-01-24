#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)          scanf("%lld %lld %lld",&a,&b,&c)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
#define pb                   push_back
#define cln(x)               memset(x, 0, sizeof(x))
const int N=123456;
int arr[N], i, j;
using namespace std;
int main()
{
    ll n, x, cnt=0, cnt1=0, mx=-1, m=0;
    sf(n);
    for(i=1; i<=n; i++)
    {
        sf(x);
        if(x==1) cnt1++;
        if(x==0)
        {
            cnt++;
        }
        else cnt--;
        if (m<cnt) {
			m=cnt;
		}
        if(cnt<0) cnt=0;
    }
    if(cnt1==n) return cout<<n-1<<endl, 0;
    cout<<(cnt1+m)<<endl;
    return 0;
}







 
