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
    ll n, cnt1=0, cnt2=0, x=0, y=0, f=0, g=0;
    sf(n);
    string s;
    cin>>s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='R')
        {
            x++;
            //cout<<"x-"<<x<<" ";
            if(x>y && f==0)
            {
                cnt1++;
                f=1;
                g=0;
            }
        }
        else if(s[i]=='U')
        {
            y++;
            //cout<<"y-"<<y<<" ";
            if(y>x && g==0)
            {
                cnt2++;
                g=1;
                f=0;
            }
        }
    }
    cout<<cnt1+cnt2-1;
    return 0;
}







 
