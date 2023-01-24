#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
using namespace std;
int main()
{
    string ch;
    cin>>ch;
    if (ch[0] >= 'A' && ch[0] <= 'Z')
      cout<<ch<<endl;
   else
      {
          ch[0]=ch[0]-32;
          cout<<ch[0];
          for(int i=1; i<ch.size(); i++) cout<<ch[i];
          cout<<endl;
      }
    return 0;
}

 
