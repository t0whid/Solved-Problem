#include<bits/stdc++.h>

#define pi acos(-1.0)

using namespace std;

int  main()
{char st[100009];

    int i,l,k;
    scanf("%s",st);
    l=strlen(st);
    k=0;
    for(i=0;i<l;i++)
    {
        if(st[i]>'a')
        {
            k=1;
            st[i]=st[i]-1;
        }
        else if(k==1)
        break;
    }
    if(k==1)
    printf("%s\n",st);
    else
    {
        st[l-1]='z';
        printf("%s\n",st);
    }
    return 0;
}
 
