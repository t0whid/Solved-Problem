#include<bits/stdc++.h>

#define ll long long
#define pi acos(-1.0)

using namespace std;

int  main()
{
    int f, h, m, m1, ha, ma;
    char c;
    scanf("%d%d%c%d", &f, &h, &c, &m);
    if(f==24){
        if(h<=23)
            h=h;
        else
            h=h%10;
        if(m<=59)
            m=m;
        else
            m=m%10;
    }
    else if(f==12)
    {
        if(h>0 && h<13)
            h=h;
        else if(h==0)
            h=1;
        else{
            h=h%10;
            if(h==0)
                h=10;
            else
                h=h;
        }
        if(m<=59)
            m=m;
        else
            m=m%10;

    }
    if(h<10)
        cout<<"0"<<h<<":";
    else
        cout<<h<<":";
    if(m<10)
        cout<<"0"<<m<<endl;
    else
        cout<<m<<endl;
    return 0;
}
 
