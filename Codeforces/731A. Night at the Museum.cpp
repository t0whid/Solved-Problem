#include<bits/stdc++.h>

#define ll long long
#define pi acos(-1.0)

using namespace std;

int  main()
{
    //string str("abcdefghijklmnopqrstuvwxyz");
    //a=97, z=122;
    char a[100];
    gets(a);

    int i=1, k=0, x=strlen(a), m=0, y=0, d1=0, d2=0, sum=0;
    int z=a[0]-'a';
    if(z>13)
        m=26-z;
    else
        m=z;
    for(i=1; i<x; i++)
    {
        y=a[i]-'a';
        d1=abs(z-y);
        if(d1>13)
            d1=26-d1;
        else
            d1=d1;
        z=y;
        sum=sum+d1;
    }
    cout<<sum+m<<endl;
    return 0;
}
 
