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
        vector<ll>v;
        ll i=0, x, c1=0, c2=0, c3=0, c4=0, s=0, k, l, m, p;
        for(i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(i=0; i<n; i++)
        {
            if(v[i]==4) c4++;
            if(v[i]==3) c3++;
            if(v[i]==2) c2++;
            if(v[i]==1) c1++;
        }
        k=min(c1, c3);
        p=max(c1, c3);
        l=c2/2;
        m=c2%2;
        //cout<<m<<endl;
        if(p==c3){
        s=c4+l+k+(c3-c1)+m;
        }
        else
        {
            ll xx=(c1-c3)/4;
            ll r=(c1-c3)%4;
            //cout<<r<<endl;
            if(r==3)
            s=c4+l+k+xx+m+1;
            else if(r==2 || r==1) s=c4+l+k+xx+1;
            else s=c4+l+k+xx+m;
        }
        cout<<s<<endl;
        v.clear();
    }
    return 0;
}
 
