#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)

using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        ll n=s.length();
        char b[4];
        ll i, r=0, B=0, y=0, g=0, r1=0, b1=0, g1=0, y1=0;
        for(i=0; i<n; i+=4)
        {
            if(s[i]!='!' && s[i]=='R')
            {
                r++;
                b[0]='R';
            }
            else if(s[i]!='!' && s[i]=='G')
            {
                g++;
                b[0]='G';
            }
            else if(s[i]!='!' && s[i]=='B')
            {
                B++;
                b[0]='B';
            }
            else if(s[i]!='!' && s[i]=='Y')
            {
                y++;
                b[0]='Y';
            }
        }
        for(i=1; i<n; i+=4)
        {
            if(s[i]!='!' && s[i]=='R')
            {
                r++;
                b[1]='R';
            }
            else if(s[i]!='!' && s[i]=='G')
            {
                g++;
                b[1]='G';
            }
            else if(s[i]!='!' && s[i]=='B')
            {
                B++;
                b[1]='B';
            }
            else if(s[i]!='!' && s[i]=='Y')
            {
                y++;
                b[1]='Y';
            }
        }
        for(i=2; i<n; i+=4)
        {
            if(s[i]!='!' && s[i]=='R')
            {
                r++;
                b[2]='R';
            }
            else if(s[i]!='!' && s[i]=='G')
            {
                g++;
                b[2]='G';
            }
            else if(s[i]!='!' && s[i]=='B')
            {
                B++;
                b[2]='B';
            }
            else if(s[i]!='!' && s[i]=='Y')
            {
                y++;
                b[2]='Y';
            }
        }
        for(i=3; i<n; i+=4)
        {
            if(s[i]!='!' && s[i]=='R')
            {
                r++;
                b[3]='R';
            }
            else if(s[i]!='!' && s[i]=='G')
            {
                g++;
                b[3]='G';
            }
            else if(s[i]!='!' && s[i]=='B')
            {
                B++;
                b[3]='B';
            }
            else if(s[i]!='!' && s[i]=='Y')
            {
                y++;
                b[3]='Y';
            }
        }
        if(b[0]=='R')
        {
            for(i=0; i<n; i+=4)
            {
                if(s[i]=='!') r1++;
            }
        }
        else if(b[1]=='R')
        {
            for(i=1; i<n; i+=4)
            {
                if(s[i]=='!') r1++;
            }
        }
        else if(b[2]=='R')
        {
            for(i=2; i<n; i+=4)
            {
                if(s[i]=='!') r1++;
            }
        }
        else if(b[3]=='R')
        {
            for(i=3; i<n; i+=4)
            {
                if(s[i]=='!') r1++;
            }
        }
         if(b[0]=='G')
        {
            for(i=0; i<n; i+=4)
            {
                if(s[i]=='!') g1++;
            }
        }
        else if(b[1]=='G')
        {
            for(i=1; i<n; i+=4)
            {
                if(s[i]=='!') g1++;
            }
        }
        else if(b[2]=='G')
        {
            for(i=2; i<n; i+=4)
            {
                if(s[i]=='!') g1++;
            }
        }
        else if(b[3]=='G')
        {
            for(i=3; i<n; i+=4)
            {
                if(s[i]=='!') g1++;
            }
        }
         if(b[0]=='Y')
        {
            for(i=0; i<n; i+=4)
            {
                if(s[i]=='!') y1++;
            }
        }
        else if(b[1]=='Y')
        {
            for(i=1; i<n; i+=4)
            {
                if(s[i]=='!') y1++;
            }
        }
        else if(b[2]=='Y')
        {
            for(i=2; i<n; i+=4)
            {
                if(s[i]=='!') y1++;
            }
        }
        else if(b[3]=='Y')
        {
            for(i=3; i<n; i+=4)
            {
                if(s[i]=='!') y1++;
            }
        }
        if(b[0]=='B')
        {
            for(i=0; i<n; i+=4)
            {
                if(s[i]=='!') b1++;
            }
        }
        else if(b[1]=='B')
        {
            for(i=1; i<n; i+=4)
            {
                if(s[i]=='!') b1++;
            }
        }
        else if(b[2]=='B')
        {
            for(i=2; i<n; i+=4)
            {
                if(s[i]=='!') b1++;
            }
        }
        else if(b[3]=='B')
        {
            for(i=3; i<n; i+=4)
            {
                if(s[i]=='!') b1++;
            }
        }

        cout<<r1<<" "<<b1<<" "<<y1<<" "<<g1<<endl;
    }
    return 0;
}
 
