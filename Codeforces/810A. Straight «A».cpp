#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
using namespace std;
int main()
{
    ll n, k;
    while(scanf("%lld%lld", &n, &k)==2)
    {
        double ar[10101];
        ll cnt=0, i;
        for(i=0; i<n; i++) scanf("%lf", &ar[i]);
        double sum=0, x=0, s1=0;
            {
                for(i=0; i<n; i++)
                    sum=sum+ar[i];
                while(1)
                {
                    x=(sum+cnt*k)/(n+cnt);
                    if(k-x<=.5) break;
                    cnt++;
                }
            }
        cout<<cnt<<endl;
    }
    return 0;
}

 
