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

    ll row, n;
    cin>>row>>n;
    for(i=1; i<=row; i++) {
		if(i%2) {
			for(j=1; j<=n; j++) cout<<"#";
			cout<<endl;
		}
		else if(i%2==0 && i%4) {
			for(j=1; j<n; j++) cout<<".";
			cout<<"#"<<endl;
		}else if(i%4==0) {
			cout<<"#";
			for(j=2; j<=n; j++) cout<<".";
			cout<<endl;
		}

    }

    return 0;
}

/*
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
*/
