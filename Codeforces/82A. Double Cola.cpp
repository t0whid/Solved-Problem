#include<bits/stdc++.h>

#define pi acos(-1.0)

using namespace std;

int  main()
{
	string queue[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	int n;
	cin>>n;
	while(n>5)
	{
		n=(n/2)-2;
	}
	cout<<queue[n-1]<<endl;
	return 0;
}
