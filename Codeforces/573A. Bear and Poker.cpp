#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;

int main()
{
    ll n, arr[100009];
    while(cin>>n)
    {
        ll i, j, a, b;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            while(arr[i]%2==0) arr[i]=arr[i]/2;
            while(arr[i]%3==0) arr[i]=arr[i]/3;
        }
        for(i=0; i<n-1; i++)
        {
            if(arr[i]!=arr[i+1]) {
            cout<<"No"<<endl;
            return 0;
            }
        }
        cout<<"Yes"<<endl;
    }
    return 0;
}
 
