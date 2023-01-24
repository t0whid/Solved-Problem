#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
using namespace std;
int main()
{
    int n;
    while(sf(n)==1)
    {
        int x, m=n;
        double ans, sum=0;
        while(n--)
        {
            cin>>x;
            sum+=x;
        }
        ans=sum/m;
        cout<<ans<<endl;
    }
    return 0;
}


 
