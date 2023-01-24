#include<bits/stdc++.h>
using namespace std;

 int main()
 {
	int s, v1, v2, t1, t2;
	cin>>s>>v1>>v2>>t1>>t2;
	int fs=(s*v1)+(2*t1);
	int sn=(s*v2)+(2*t2);
	if(fs==sn) cout<<"Friendship";
	else if(fs<sn) cout<<"First";
	else cout<<"Second";
	
	return 0;
 }
