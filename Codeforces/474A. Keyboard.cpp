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
    string s="qwertyuiopasdfghjkl;zxcvbnm,./", s1, s2;
    while(cin>>s1>>s2)
    {
        ll i, x;
        if(s1=="R")
            x=-1;
        else
            x=1;
        for(i=0; i<s2.size(); i++)
        {
            cout<<s[s.find(s2[i])+x];
        }
        cout<<endl;
    }
    return 0;
}







 
