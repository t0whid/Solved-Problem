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
    ll low,up,n,m,ans=-1,i;
    cin>>n>>m;
    low=(n+1)/2;
    up=n;
    for(i=1; i*m<=up; i++)
        if(i*m>=low)
        {
            ans=i*m;
            break;
        }
    cout<<ans<<endl;
    return 0;
}







 
