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
    //Bulbasaur
    string s;
    while(cin>>s)
    {
        ll cnt=0, a[6]={0},i, j, x;
        x=s.size();
        for(i=0; i<x; i++)
        {
            if(s[i]=='B') cnt++;
            if(s[i]=='u') a[0]++; //2
            if(s[i]=='l') a[1]++;
            if(s[i]=='a') a[2]++; //2
            if(s[i]=='b') a[3]++;
            if(s[i]=='s') a[4]++;
            if(s[i]=='r') a[5]++;
        }
        a[0]=a[0]/2;
        a[2]=a[2]/2;
        sort(a, a+6);
        if(a[0]==cnt) pf(cnt);
        else
        {
            cnt=min(a[0], cnt);
            pf(cnt);
        }
    }
    return 0;
}
 
