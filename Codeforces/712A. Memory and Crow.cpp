#include<bits/stdc++.h>

#define pi acos(-1.0)

using namespace std;

int  main()
{
	int n;
	cin >> n;

	long long a[n] = {};
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(i)	a[i - 1] += a[i];
	}

	for(int i = 0; i < n; i++)	cout << a[i] << ' ';

	return 0;
}
