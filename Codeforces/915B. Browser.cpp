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
    int n,l,r,pos;
    cin>>n>>pos>>l>>r;
    if(l==1&&r==n)
        cout<<0;
    else if(l==1)
        cout<<abs(r-pos)+1;
    else if(r==n)
        cout<<abs(l-pos)+1;
    else
        cout<<min(abs(r-pos),abs(l-pos))+2+(r-l);
    return 0;
}






 
