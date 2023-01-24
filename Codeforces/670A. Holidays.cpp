#include<bits/stdc++.h>
using namespace std;
main()
{
	unsigned n, max, min;
	while(scanf("%u", &n)==1)
	{
			if(n%7==0)
			{
				max=(n/7)*2;
				min=(n/7)*2;
			}
			else if(n%7!=0)
			{
				if(n%7==1)
				{
					min=(n/7)*2;
					max=(n/7)*2+1;
				}
				else if(n%7>1&&n%7<=5)
				{
					min=(n/7)*2;
					max=(n/7)*2+2;
				}
				else if(n%7==6)
				{
					min=(n/7)*2+1;
					max=(n/7)*2+2;
				}
			}
			printf("%u %u\n", min, max);
	}
	return 0;
}
