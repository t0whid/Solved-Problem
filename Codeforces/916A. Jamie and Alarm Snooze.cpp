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
    ll x, h, m;
    while(sf(x)==1)
    {
        getchar();
        ll tm=0, ans, cnt=0, b[4], a[4];
        char c[5];
        scanf("%c", &c[0]);
        scanf("%c", &c[1]);
        scanf("%c", &c[2]);
        scanf("%c", &c[3]);
        scanf("%c", &c[4]);
        a[0]=c[0]-'0';
        a[1]=c[1]-'0';
        a[2]=c[3]-'0';
        a[3]=c[4]-'0';
        h=a[0]*10+a[1];
        m=a[2]*10+a[3];
        if(a[0]==7 || a[1]==7 || a[2]==7 || a[3]==7) cnt=0;
        else{
        while(1)
        {
            cnt++;
            if(m<x)
            {
                if(h<0) h=23;
                m=m+60;
                h--;
            }
            m=m-x;
            b[0]=h/10;
            b[1]=h%10;
            b[2]=m/10;
            b[3]=m%10;

            if(b[0]==7 || b[1]==7 || b[2]==7 || b[3]==7) break;
        }
        }
        pf(cnt);

    }
    return 0;
}




 
