#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        ll x=s.size();
        ll i, nt=0, j;
        for(i=0; i<x; i++)
        {
            if(s[i]=='1') break;
        }
        for(j=i+1; j<x; j++)
        {
            if(s[j]=='0') nt++;
        }
        if(nt>=6) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}

 
