#include<bits/stdc++.h>

#define pi acos(-1.0)

using namespace std;

int  main()
{
	int a, b;
	while(scanf("%d%d", &a, &b)==2)
	{
		int n, x[1001], y[1001], v[1001], i, j, k, l;
		double dis[1001], time[1001];
		double ans=0;
		scanf("%d", &n);
		for(i=0; i<n; i++)
		{
			scanf("%d%d%d", &x[i],&y[i],&v[i]);
		}
		for(j=0; j<n; j++)
		{
			dis[j]=sqrt(((x[j]-a)*(x[j]-a))+((y[j]-b)*(y[j]-b)));
			time[j]=dis[j]/v[j];
		}
		sort(time, time+n);
		printf("%.20lf\n", time[0]);
	}

	return 0;
}
