#include <bits/stdc++.h>
using namespace std;

 int main()
 {
 	string s;
 	cin>>s;
 	int b=s.find("WUB");
	 while( b!=-1)
	 {
    	 s.replace(b,3," ");
   	  b=s.find("WUB");
	 }
	 cout<<s;
 	return 0;
 }
