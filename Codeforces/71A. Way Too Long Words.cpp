#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;

int main()
{
    ll n;
    cin>>n;
    while(n--){
    string s;
    cin>>s;
    ll x=s.size();
    if(x<=10) cout<<s<<endl;
    else cout<<s[0]<<x-2<<s[x-1]<<endl;
    }
    return 0;
}

 
