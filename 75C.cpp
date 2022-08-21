#include<bits/stdc++.h>
using namespace std;

 int main()
 {
	int m, s;
	cin>>m>>s;
	int x=s/9;
	int xm=s%9;
	if(m*9<s or s==0 and m!=1) return cout<<-1<<" "<<-1, 0;
	if(m==1) return cout<<s<<" "<<s, 0;
	if(s<=9 && m>=2)
	{
		cout<<1;
		for(int i=1; i<m-1; i++) cout<<0;
		cout<<s-1<<" "<<s;
		for(int i=1; i<m; i++) cout<<0;
	}
	else{
	vector<int>nn;
	vector<int>v;
	for(int i=0; i<x; i++) nn.push_back(9);
	if(xm!=0) v.push_back(xm);
	if(x+1<m)
	for(int i=0; i<m-x-1; i++) v.push_back(0);
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i];
	}
	for(int i=0; i<nn.size(); i++) cout<<nn[i];
	cout<<" ";
	for(int i=0; i<nn.size(); i++) cout<<nn[i];
	for(int i=0; i<v.size(); i++) cout<<v[i];
	}
	return 0;
 }
