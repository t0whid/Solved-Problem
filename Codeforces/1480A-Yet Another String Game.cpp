
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
const int N=5;
ll arr[N], i, j, bul=0, cnt=0, tc;
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>tc;
    while(tc--)
	{
		string str;
		cin>>str;
		for(i=0; i<str.size(); i++)
		{
			if(i%2==0)
			{
				if(str[i] != 'a') str[i] = 'a';
				else if(str[i] == 'a') str[i] = 'b';
			}
			else if(i%2==1)
			{
				if(str[i] != 'z') str[i] = 'z';
				else if(str[i] == 'z') str[i] = 'y';
			}
		}
		cout<<str<<endl;
	}
    return 0;
}

/*
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
*/
