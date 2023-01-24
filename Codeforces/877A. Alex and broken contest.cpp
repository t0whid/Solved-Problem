#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)               scanf("%lld",&a)
#define sff(a,b)           scanf("%lld %lld",&a,&b)
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {

        size_t k1, k2, k3, k4, k5;
        string word1="Danil";
        string word2="Olya";
        string word3="Slava";
        string word4="Ann";
        string word5="Nikita";

        k1=s.find(word1);
        k2=s.find(word2);
        k3=s.find(word3);
        k4=s.find(word4);
        k5=s.find(word5);
        ll cnt=0;
        if (k1 !=string::npos)
        {
            cnt++;
        }
        if (k2 !=string::npos)
        {
            cnt++;
        }
        if (k3 !=string::npos)
        {
            cnt++;
        }
        if (k4 !=string::npos)
        {
            cnt++;
        }
        if (k5 !=string::npos)
        {
            cnt++;
        }
        if(cnt==1 && s!="Nikita_Nikita" &&s!="AnnAnn" && s!="DanilDanil") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
 
