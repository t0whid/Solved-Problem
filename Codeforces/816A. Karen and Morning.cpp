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
    ll h,m,t=0;
    char c;
    cin>>h>>c>>m;
    while(1)
    {
        if(h/10==m%10&&h%10==m/10)
            break;
        m++;
        t++;
        if(m==60)
        {
            h++;
            m=0;
        }
        if(h==24)
            h=0;
    }
    cout<<t<<endl;
    return 0;
}







 
