#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
using namespace std;
int main()
{
    ll n;
    while(scanf("%lld", &n)==1)
    {
        char s[100];
        getchar();
        scanf("%s", s);
        ll x=strlen(s), cnt=0;
        for(int i=0; i<x; i++)
        {
            if(s[i]==s[i+1]) cnt++;
        }
        printf("%lld\n", cnt);
    }
    return 0;
}

 
