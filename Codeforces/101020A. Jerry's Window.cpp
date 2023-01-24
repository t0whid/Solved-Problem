#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <math.h>

#define pi acos(-1.0)

using namespace std;

int  main()
{
	long long a, b, i, t;
	scanf("%I64d", &t);
	for(i=1; i<=t; i++)
	{
		scanf("%I64d %I64d", &a, &b);
		printf("%I64d\n", a*b);
	}
    return 0;
}
 
