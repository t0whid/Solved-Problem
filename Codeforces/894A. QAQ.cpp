                           /*This is "Towhid"*/
                            /* LoopBreakers */
                             /*Dream Seeker*/

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
    string s;
    while(cin>>s)
    {
        ll i, f, cnt=0, j, k, l, x;
        x=s.size();
        for(i=0; i<x-2; i++)
        {
            if(s[i]=='Q')
            {
                for(j=i+1; j<x-1; j++)
                {
                    if(s[j]=='A')
                    {
                        for(k=j+1; k<x; k++)
                        {
                            if(s[k]=='Q') cnt++;
                        }
                    }
                }
            }
        }
        pf(cnt);
    }
    return 0;
}



 
