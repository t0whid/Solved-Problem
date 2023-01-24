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
    ll n, ar[12][12], i, j;
    cin>>n;
    for(i=1; i<=n; i++)
        ar[1][i]=ar[i][1]=1;
    for(i=2; i<=n; i++)
        for(j=2; j<=n; j++)
            ar[i][j]=ar[i][j-1]+ar[i-1][j];
    cout<<ar[n][n]<<endl;
    return 0;
}






 
