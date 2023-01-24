#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;

void lower(string & s)
{
    ll i;
    for(i=0; i<s.length(); i++)
    {
        s[i]=tolower(s[i]);
    }
}

int main()
{
    string s, str;
    while(cin>>s)
    {
        lower(s);
        vector<char>v;
        ll x, y, z, j, i;
        x=s.size();
        for(i=0; i<=x; i++)
        {
            if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'){
                //char c='.';
                v.push_back('.');
                v.push_back(s[i]);
            }
        }
        y=v.size();
        for(i=0; i<y-2; i++) cout<<v[i];
        cout<<endl;
        v.clear();
    }

    return 0;
}
