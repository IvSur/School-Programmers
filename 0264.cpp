#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, i, a, b, d;

    cin >> n;

    a = 0;
    d = 0;
    for (i = 0; i < n; i++)
    {
        cin >> b;
        if ( b < 1)
            a = 0;
        else
		a = a + 1;
	if ( a > d)
            d = a;
    }

    cout << d;

    return 0;
}
