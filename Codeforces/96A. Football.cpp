#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];

using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        ll x, y=0, i, j, s=0, c=0;
        x=str.size();
        for(i=0; i<x; i++)
        {
            if(str[i]=='0')
            {
                s++;
                if(s>=7) y=1;
            }
            else s=0;
            if(str[i]=='1')
            {
                c++;
                if(c>=7) y=1;
            }
            else c=0;
            //cout<<"s "<<s<<" c "<<c<<endl;
        }
        if(y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
 
