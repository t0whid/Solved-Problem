#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    //vector<char>v;
    char x[200000];
    scanf("%s", x);
    int d1=0, d2=0, d;
    for(int i=0; i<n; i++)
    {
        if(x[i]=='0') d1++;
        else d2++;
    }
    d=abs(d1-d2);
    printf("%d\n", d);
    return 0;
}
