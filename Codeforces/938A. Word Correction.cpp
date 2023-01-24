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
const int N=123;
int arr[N], i, j;
using namespace std;
int main()
{
    string s, s1;
    ll n;
    cin>>n;
    cin>>s;
    ll x=s.size();
    for(i=0; i<x; i++)
    {
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='y')
            arr[i]=1;
        else
            arr[i]=0;
    }
    for(i=0; i<x; i++)
    {
        if(arr[i]==1)
        {
            for(j=i+1; j<x; j++)
            {
                if(arr[j]==1)
                {
                    s[j]='0';
                    arr[j]=0;
                }
                else
                    break;
            }
        }
    }
    for(i=0; i<x; i++)
    {
        if(s[i]!='0')
            cout<<s[i];
    }
    return 0;
}







 
