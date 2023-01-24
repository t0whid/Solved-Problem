#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;

int main()
{
    ll m, d;
    while(cin>>m>>d)
    {
        ll ans=0;
        if(m==2)
        {
            ans=(28+d-1)/7;
            if(ans*7<(28+d-1)) ans++;
        }
        else if(m==4||m==6||m==9||m==11)
        {
            ans=(30+d-1)/7;
             if(ans*7<(30+d-1)) ans++;
        }
        else
        {
            ans=(31+d-1)/7;
             if(ans*7<(31+d-1)) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
 
