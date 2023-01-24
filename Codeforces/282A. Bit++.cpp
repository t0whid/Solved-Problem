#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];

using namespace std;

int main()
{
    ll n;
    while(cin>>n)
    {
        ll s1=0, s2=0, s=0;
        string st;
        while(n--)
        {
            cin>>st;
            if(st[1]=='+') s1++;
            else s2++;
        }
        s=s1-s2;
        cout<<s<<endl;
    }
    return 0;
}
 
