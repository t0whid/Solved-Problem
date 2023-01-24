#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;

int main()
{
    ll n, x;
    while(cin>>n>>x)
    {
        ll arr[1000], i, j=0, flag=0;
        for(i=0; i<n; i++) cin>>arr[i];
            for(i=0; i<n; i++)
            {
                if(arr[i]==0) j++;
            }
            if(j==n) cout<<0<<endl;
        else
        {
            if(arr[x-1]!=0){
            for(i=0; i<n; i++)
            {
                if(arr[i]<arr[x-1]) {break;}
            }
             cout<<i<<endl;
            }
            else
            {
                for(i=0; i<n; i++)
            {
                if(arr[i]==0) {break;}
            }
             cout<<i<<endl;
            }
        }
    }
    return 0;
}
 
