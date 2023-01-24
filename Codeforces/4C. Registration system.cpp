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
        map<string, int>s1;
        string s;
        while(n--)
        {
            cin>>s;
            if(s1.count(s)==0)
            {
                cout<<"OK"<<endl;
                s1[s]=1;
            }
            else
            {
                cout<<s<<s1[s]<<endl;
                s1[s]+=1;
            }
        }
    }
    return 0;
}
 
