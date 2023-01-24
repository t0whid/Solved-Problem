#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
using namespace std;

int main()
{
    ll n, i;
    string s;
    while(cin>>n>>s)
    {
        for(i=0;i<n;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            s[i]=toupper(s[i]);
    }
        set<char>my;
        for(i=0; i<n; i++)
        {
            my.insert(s[i]);
        }
        ll x=my.size();
        if(x==26) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


 
