#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
    cin >> n;
    int r = 0;
    r = (n / 3) * 2;
    if ((n % 3) == 1 || (n % 3) == 2) {
        r++;
    }
    cout << r << endl;

    return 0;
}
