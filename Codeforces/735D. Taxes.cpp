                           /*This is "Towhid"*/
                            /* LoopBreakers */
                             /*Dream Seeker*/

#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define sf(a)                scanf("%lld",&a)
#define sff(a,b)             scanf("%lld %lld",&a,&b)
#define case(a,b)            printf("Case %lld: %lld\n",a,b)
#define pf(a)                printf("%lld\n",a)
#define pff(a,b)             printf("%lld %lld\n",a,b)
using namespace std;
bool is_prime(ll n) {
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	for (ll i = 3; i <= sqrt(n);  i++)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
    ll n;
    while(sf(n)==1)
    {
        if (is_prime(n))
            cout << "1\n";
        else if (n % 2 == 0 || is_prime(n-2))
            cout << "2\n";
        else
            cout << "3\n";
    }
    return 0;
}



 
