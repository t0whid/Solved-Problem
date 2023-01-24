#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];

using namespace std;

int main()
{
    string s1, s2;
    while(cin>>s1>>s2)
    {
        ll x, y;
        x=s1.size();
        y=s2.size();
        if(s1!=s2) cout<<max(x,y)<<endl;
        else cout<<-1<<endl;

    }
    return 0;
}
 
