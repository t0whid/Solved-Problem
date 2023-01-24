#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
#define pb		     push_back
using namespace std;
int main()
{
    ll n, m, k;
    while(sf(n)==1)
    {
        sff(m,k);
        ll i, j, cnt=0, ans=0, cn=0;
        string s[2010];
        for(i=0; i<n; i++)
        {
            cin>>s[i];
        }
        if(k==1)
        {
            for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(s[i][j]=='.')
                {
                    cnt++;
                }
            }
        }
        ans=cnt;
        }
        else{
        for(i=0; i<n; i++)
        {
            cnt=0;
            for(j=0; j<m; j++)
            {
                //cout<<cnt;
                if(s[i][j]=='.')
                {
                    cnt++;
                    if(cnt==k) {ans++, cnt=k-1;}
                }
                else cnt=0;
            }
        }
        for(j=0; j<m; j++)
        {
            cnt=0;
            for(i=0; i<n; i++)
            {
                if(s[i][j]=='.')
                {
                    cnt++;
                    if(cnt>=k) {ans++, cnt=k-1;}
                }
                else cnt=0;
            }
        }
        }
        pf(ans);

    }
    return 0;
}







 
