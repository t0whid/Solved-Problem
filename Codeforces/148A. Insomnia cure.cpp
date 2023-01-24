#include <bits/stdc++.h>
using namespace std;

 int main()
 {
	int k, l, m, n, d, sum=0;
	cin>>k>>l>>m>>n>>d;
	set<int>s;
	while(1)
	{
		sum+=k;
		if(sum>d) break;
		s.insert(sum);
	}
	sum=0;
	while(1)
	{
		sum+=l;
		if(sum>d) break;
		s.insert(sum);
	}
	sum=0;
	while(1)
	{
		sum+=m;
		if(sum>d) break;
		s.insert(sum);
	}
	sum=0;
	while(1)
	{
		sum+=n;
		if(sum>d) break;
		s.insert(sum);
	}
	int x=s.size();
	cout<<x<<endl;
 }
