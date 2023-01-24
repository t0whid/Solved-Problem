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
    string s;
    while(cin>>s)
    {
        ll x, i, j, cnt=0;
        x=s.size();
        set<char>myset;
        for(i=0; i<x; i++)
        {
            myset.insert(s[i]);
        }
        if(myset.size()%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    if(myset.size()%2!=0)
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}


 
