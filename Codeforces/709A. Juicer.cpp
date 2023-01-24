#include<bits/stdc++.h>

#define pi acos(-1.0)

using namespace std;

int  main()
{
	int64_t n, b, d;

	while(scanf("%I64d%I64d%I64d", &n, &b, &d)==3)
	{
		int64_t a, sum=0, cnt=0;
		while(n--)
		{
			scanf("%I64d", &a);
			if(a<=b)
			sum=sum+a;
			if(sum>d)
			{
				cnt++;
				sum-=sum;
			}
		}
		printf("%I64d\n", cnt);
	}


	return 0;
}
