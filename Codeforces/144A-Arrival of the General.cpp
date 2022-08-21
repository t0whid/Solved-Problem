#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)          scanf("%lld %lld %lld",&a,&b,&c)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
#define pb                   push_back
#define cln(x)               memset(x, 0, sizeof(x))
#define nl                   printf("\n");
const int N=1256;
ll arr[N], i, j, bul=0, cnt=0;
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;
    ll max, min, max_temp=0, min_temp=10000;
    cin>>n;
    for(i=0; i<n; i++) cin>>arr[i];
    for(i=0; i<n; i++)
    {
		if(arr[i]>max_temp) {
			max_temp = arr[i];
			max = i;
		}
		if(arr[i]<=min_temp) {
			min_temp = arr[i];
			min = i;
		}
    }
    ll step_min, step_max;
    step_min = n-min;
    step_max = max;
    ll ans = step_min+step_max - 1;
    if(max>min) ans--;
    cout<<ans<<endl;

    return 0;
}

/*
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
*/
