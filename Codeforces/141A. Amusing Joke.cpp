#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin>>s1>>s2>>s3;
    int x=s1.size(), xx=s2.size(), xxx=s3.size();
    if(x+xx!=xxx) return cout<<"NO", 0;
    map<char,int>m1;
    map<char,int>m2;
    for(int i=0; i<x; i++) m1[s1[i]]++;
    for(int i=0; i<xx; i++) m1[s2[i]]++;
    for(int i=0; i<xxx; i++) m2[s3[i]]++;
    for(int i='A'; i<='Z'; i++)
       {
           if(m1[i]!=m2[i]) return cout<<"NO", 0;
        }
    cout<<"YES";
    return 0;
}
