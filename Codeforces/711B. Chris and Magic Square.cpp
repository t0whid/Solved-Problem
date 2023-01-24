#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
#define case(a,b) printf("Case %lld: %ll4d\n",a,b)
#define pf(a) printf("%lld\n",a)
#define pff(a,b) printf("%lld %lld\n",a,b)
using namespace std;
int main()
{
    ll a[501][501], n;
    while(sf(n)==1)
    {
        ll b, sum=0, i, j, c, sf=0, s=0;
        vector<ll>v;
        vector<ll>v2;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
        {
            sf(a[i][j]);
            if(a[i][j]==0)
            {
                b=i;
                c=j;
            }
        }
        if(n==1)
        {
            if(a[0][0]!=0) pf(a[0][0]);
            else pf(5);
        }
        else
        {
        /*for(i=b; i<b+1; i++)
        {
            for(j=0; j<n; j++)
            {
                sf+=a[i][j];
            }
        }*/
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                sum+=a[i][j];
            }
            v.push_back(sum);
            sum=0;
            //pf(v[i]);
        }
        sort(v.begin(),v.end());
        ll x=v.size();
        ll fg=0;
        ll dif=v[x-1]-v[0];
        if(dif==0) fg=1;
        //pf(dif);
        a[b][c]=dif;
        //pf(a[b][c]);
        for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    s+=a[i][j];
                }
                v2.push_back(s);
                //cout<<sum[i]<<endl;
                s=0;
            }
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    s+=a[j][i];
                }
                v2.push_back(s);
                //cout<<sum[i]<<endl;
                s=0;
            }
            for(i=0; i<n; i++)
            {
                s+=a[i][i];
            }
                v2.push_back(s);
                //cout<<sum[i]<<endl;
                s=0;
            for(i=0; i<n; i++)
            {
                s+=a[n-i-1][i];
            }
            v2.push_back(s);
            ll ss=v2.size();
            sort(v2.begin(), v2.end());
            if(v2[0]==v2[ss-1] && fg==0)
            {
                pf(dif);
            }
            else cout<<-1<<endl;
        }
    }
    return 0;
}
 
