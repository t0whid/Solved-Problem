#include<bits/stdc++.h>

#define ll long long
#define pi acos(-1.0)

using namespace std;

int  main()
{
    ll k, n, i=1, sum=0;
    cin>>k>>n;
    sum=k;
    while(1)
    {
        if(k%10==0 || k%10==n){
            break;
        }
        else
        {
            k=sum+k;
            i++;
        }
    }
    cout<<i<<endl;
    return 0;
}

 
