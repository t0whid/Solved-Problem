#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin>>s>>n;
    pair<int,int>mp[1005];
    for(int i=0; i<n; i++) cin>>mp[i].first>>mp[i].second;
    sort(mp, mp+n);
    for(int i=0; i<n; i++)
    {
        if(s<=mp[i].first) return cout<<"NO", 0;
        s+=mp[i].second;
    }
    cout<<"YES";
}
