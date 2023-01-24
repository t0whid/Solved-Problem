#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define N 1000000
int primes[N];

using namespace std;
void rev(string &str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i=0; i<n/2; i++)
       swap(str[i], str[n-i-1]);
}
int main()
{
    string s1, s2;
    while(cin>>s1>>s2)
    {
        string s3;
        rev(s2);
        if(s1==s2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
 
