#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int lucky[N];
using namespace std;

void luck()
{
    ll i, j;
    for(i=4; i<=N; i=i+4)
    {
        lucky[i]=1;
    }
    for(i=7; i<=N; i=i+7)
    {
        lucky[i]=1;
    }
    for(i=47; i<=N; i=i+47)
    {
        lucky[i]=1;
    }
    for(i=74; i<=N; i=i+74)
    {
        lucky[i]=1;
    }
    for(i=447; i<=N; i=i+447)
    {
        lucky[i]=1;
    }
    for(i=474; i<=N; i=i+474)
    {
        lucky[i]=1;
    }
    for(i=774; i<=N; i=i+774)
    {
        lucky[i]=1;
    }
    for(i=747; i<=N; i=i+747)
    {
        lucky[i]=1;
    }
    for(i=477; i<=N; i=i+477)
    {
        lucky[i]=1;
    }
}

int main()
{
    ll n;
    luck();
    while(cin>>n)
    {
        if(lucky[n]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
 
