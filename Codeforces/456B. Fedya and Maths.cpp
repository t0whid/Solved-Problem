#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;

int main()
{
    char s[1000000];
    ll a, b;
    ll num;
    gets(s);
    ll x=strlen(s);
    a=s[x-1]-'0';
    b=s[x-2]-'0';
    num=b*10+a;
    if(num%4==0) cout<<4<<endl;
    else cout<<0<<endl;

    return 0;
}
 
