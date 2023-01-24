#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
using namespace std;
int main()
{
    string s1, s2;
    cin>>s1>>s2;
    ll x=s1.size();
    for(int i=0; i<x; i++)
    {
        if(s1[i]!=s2[i]) cout<<1;
        else cout<<0;
    }
    printf("\n");
    return 0;
}

 
