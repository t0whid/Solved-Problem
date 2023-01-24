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
    ll n, m;
    while(sff(n,m)==2)
    {
        double a, b, x, ar[5001];
        ll i;
        for(i=0; i<n; i++){
        cin>>a>>b;
        x=a/b;
        //cout<<x<<endl;
        ar[i]=x;
        }
        sort(ar, ar+n);
        double ans=(double)m*ar[0];
        printf("%.8lf\n",ans);

    }
    return 0;
}







 
