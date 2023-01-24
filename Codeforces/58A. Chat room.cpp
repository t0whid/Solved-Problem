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
    string S;
    while(cin>>S)
    {
        ll x=S.size();
        ll i, j, k, l, m, n;
        for(i=0; i<x; i++)
        {
            if(S[i]=='h')
            for(j=i+1; j<x; j++)
            {
                if(S[j]=='e')
                for(k=j+1; k<x; k++)
                {
                    if(S[k]=='l')
                    for(l=k+1; l<x; l++)
                    {
                        if(S[l]=='l')
                        for(m=l+1; m<x; m++)
                        {
                            if(S[m]=='o')
                            {
                                cout<<"YES";
                                return 0;
                            }
                        }
                    }
                }
            }
        }
        cout<<"NO";
    }
    return 0;
}


 
