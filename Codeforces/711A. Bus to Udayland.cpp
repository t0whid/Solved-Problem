#include<bits/stdc++.h>

#define ll long long
#define pi acos(-1.0)

using namespace std;

int  main()
{
    ll n, i,j, k, l, cnt=0;
    string s[1010];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }
        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
            {
                if(s[i][j]=='O'&&s[i][j+1]=='O'&& cnt==0)
                {
                    s[i][j]='+';
                    s[i][j+1]='+';
                    cnt=1;
                }
            }
        }
        if(cnt==1)
        {
            cout<<"YES"<<endl;
            for(i=0; i<n; i++)
            {
                cout<<s[i]<<endl;
            }
        }
        else
            cout<<"NO"<<endl;
    return 0;
}
 
