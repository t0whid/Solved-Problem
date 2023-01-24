#include <bits/stdc++.h>
using namespace std;

 int main()
 {
 	int n;
 	scanf("%d",&n);
 	int sum=0, cnt=0, x;
 	while(n--)
 	{
 		scanf("%d", &x);
 		sum+=x;
 		if(sum<0)
 		{
 			cnt++;
 			sum=0;
 		}
 	}
 	printf("%d\n",cnt);
 	return 0;
 }
