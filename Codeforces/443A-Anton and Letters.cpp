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
const int N=123456;
ll arr[N], i, j, bul=0, cnt=0;
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    set<char>dis;
    int len = str.size();
    //cout<<len<<endl;
    for(i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i] <='z') dis.insert(str[i]);
    }
    int x=dis.size();
    cout<<x<<endl;
    return 0;
}
