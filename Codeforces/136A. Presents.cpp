#include <iostream>
using namespace std;

int main() {
	int n, i,x, a[200];
cin>>n;
for(i=1; i<=n;i++)
{
  cin>>x;
  a[x]=i;
}
for(i=1; i<=n; i++)
{ cout<<a[i]<<" ";
}
	return 0;
}
