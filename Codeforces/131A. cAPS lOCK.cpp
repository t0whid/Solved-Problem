#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
using namespace std;
int main()
{
    string ch;
    while(cin>>ch)
      {
          ll i, j, k, x, cnt=0, flag=0;
          x=ch.size();
          if(x==1)
          {
              if (ch[0] >= 'a' && ch[0] <= 'z')
              {
                  ch[0]=ch[0]-32;
                  cout<<ch<<endl;
                  return 0;
              }
              else
              {
                  ch[0]=ch[0]+32;
                  cout<<ch<<endl;
                  return 0;
              }
          }
          else{
          if (ch[0] >= 'a' && ch[0] <= 'z'){
          for(i=1; i<x; i++)
          {
              if (ch[i] >= 'a' && ch[i] <= 'z')
              {
                  flag=1;
                  break;
              }
          }
          if(flag==1) {cout<<ch<<endl; return 0;}
          else
          {
              ch[0]=ch[0]-32;
          for(i=1; i<ch.size(); i++)
          {
                ch[i]=ch[i]+32;
          }
            cout<<ch<<endl;
            return 0;
          }
          }
          if (ch[0] >= 'A' && ch[0] <= 'Z')
          {
              for(i=1; i<x; i++)
          {
              if (ch[i] >= 'a' && ch[i] <= 'z')
              {
                  flag=1;
                  break;
              }
          }
          if(flag==1) {cout<<ch<<endl; return 0;}
          else
          {
              ch[0]=ch[0]+32;
          for(i=1; i<ch.size(); i++)
          {
                ch[i]=ch[i]+32;
          }
            cout<<ch<<endl;
            return 0;
          }
          }
          }
          /*if (ch[0] >= 'A' && ch[0] <= 'Z')
          ch[0]=ch[0];
          else ch[0]=ch[0]-32;
          for(int i=1; i<ch.size(); i++)
          {
               if (ch[i] >= 'a' && ch[0] <= 'z')
          ch[i]=ch[i];
          else ch[i]=ch[i]+32;
          }
          cout<<ch<<endl;*/

      }
    return 0;
}


 
