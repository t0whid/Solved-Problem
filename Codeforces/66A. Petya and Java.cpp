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
    long double s1;
    while(cin>>s1)
    {
        if(s1<=127) cout<<"byte"<<endl;
        else if(s1<=32767) cout<<"short"<<endl;
        else if(s1<=2147483647) cout<<"int"<<endl;
        else if(s1<=9223372036854775807) cout<<"long"<<endl;
        else cout<<"BigInteger"<<endl;
    }
    return 0;
}




 
