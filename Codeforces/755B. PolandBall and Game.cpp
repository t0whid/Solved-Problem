#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;
string a;
ll n, m, x, y, z, ff, i, j;
map<string , long long>xx;
int main()
{

    cin>>n>>m;
   for(i=0;i<n;i++)
   {
       cin>>a;
       xx[a]++;
   }
   for(i=0;i<m;i++)
   {
       cin>>a;

       if(xx[a]==1)
        ff++;
   }
   z=m-ff;
   x=ff;
   y=n-ff;
       if(x==0 && ff==0)
       {
           if(n<=m)
           {
               cout<<"NO"<<endl;
               return 0;
           }
           else
           {
               cout<<"YES"<<endl;
               return 0;
           }


       }
       else
       {
           if(ff%2==1)
           {
               if(z==0 && y==0)
               {
                   cout<<"YES"<<endl;
               }
             else  if(y==z)
               {
                   cout<<"YES"<<endl;
               }
               else if(y>z)
                cout<<"YES"<<endl;
               else if(y<z) cout<<"NO"<<endl;;
           }
           else if(ff%2==0)
           {
               if(z==0 && y==0)
               {
                   cout<<"NO"<<endl;
               }
               else if(z==y)
               {
                   cout<<"NO"<<endl;
               }
               else if(z>y)
               {
                   cout<<"NO"<<endl;
               }
               else if(y>z)
               {
                   cout<<"YES"<<endl;
               }
           }
       }

    return 0;
}
 
