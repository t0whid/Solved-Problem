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
ll arr[N], i, j, k;
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    ll x=s.size(), num;
    for(i=0; i<x; i++)
    {
        if(s[i]=='0' || s[i]=='8')
            return cout<<"YES"<<endl<<s[i]<<endl, 0;
    }
    for(i=0; i<x; i++)
    {
        for(j=i; j<x; j++)
        {
            num=(s[i]-'0')*10+(s[j]-'0');
            if(num%8==0)
                return cout<<"YES"<<endl<<num<<endl, 0;
        }
    }
    for(i=0; i<x; i++)
    {
        for(j=i+1; j<x; j++)
        {
            for(k=j+1; k<x; k++)
            {
                num=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
                if(num%8==0)
                    return cout<<"YES"<<endl<<num<<endl, 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}







 
