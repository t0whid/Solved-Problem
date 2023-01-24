#include<bits/stdc++.h>

#define ll long long
#define pi acos(-1.0)

using namespace std;

int  main()
{
    ll n, cnt1, cnt2;
    while(cin>>n)
    {
        cnt1=0, cnt2=0;
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A') cnt1++;
            else cnt2++;
        }
        if(cnt1>cnt2) cout<<"Anton"<<endl;
        else if(cnt1<cnt2) cout<<"Danik"<<endl;
        else cout<<"Friendship"<<endl;
    }

    return 0;
}
 
