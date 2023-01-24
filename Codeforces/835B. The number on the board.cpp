#include<bits/stdc++.h>
using namespace std;

 int main()
 {
	int n;
	string s;
	cin>>n>>s;
	int x=s.size();
	int i, sum=0, n1=0, cnt=0;
	for(i=0; i<x; i++) sum+=s[i]-'0';
	if(sum>=n) return cout<<0, 0;
	sum=n-sum;
	sort(s.begin(), s.end());
	for(i=0; i<x; i++)
	{
		n1+=(9-(s[i]-'0'));
		cnt++;
		if(n1>=sum) return cout<<cnt, 0;
	}
	return 0;
 }
