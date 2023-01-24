#include<bits/stdc++.h>
using namespace std;
int i, j, ar[200002], br[200002];
int main()
{
    int n, k, q, x, y, cnt=0;
    scanf("%d%d%d",&n,&k,&q);
    while(n--)
    {
        scanf("%d%d",&x,&y);
        ar[x]++;
        ar[y+1]--;
    }
    for(i=1; i<=200002; i++)
    {
        ar[i]+=ar[i-1];
    }
    for(i=1; i<=200002; i++)
    {
        if(ar[i]>=k)
            cnt++;
        br[i]=cnt;
    }
    while(q--)
    {
        scanf("%d%d",&x,&y);
        printf("%d\n", br[y]-br[x-1]);
    }
    return 0;
}
