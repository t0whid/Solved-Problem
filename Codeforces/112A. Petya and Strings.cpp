#include<bits/stdc++.h>
#define pi acos(-1.0)

using namespace std;

void lower(string & s)
{
    int i;
    for(i=0; i<s.length(); i++)
    {
        s[i]=tolower(s[i]);
    }
}

int main()
{
    string s1, s2;
    while(cin>>s1>>s2)
    {
        lower(s1);
        lower(s2);
        int sum1=0, sum2=0, i, x, y=0, f=0, g=0, h=0;
        x=s1.size();
        for(i=0; i<x; i++)
        {
            sum1+=int(s1[i]);
            sum2+=int(s2[i]);
            if(sum1>sum2)
            {
                f=1;
                break;
            }
            if(sum1<sum2)
            {
                g=1;
                break;
            }
            h++;
        }
        if(h==x) cout<<0<<endl;
        else if(g) cout<<-1<<endl;
        else if(f) cout<<1<<endl;
    }

    return 0;
}
