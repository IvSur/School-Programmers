#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, i, j, a, b, c;

    cin >> n >> i >> j;

    a = abs(i - j) - 1;
    if (i < j)
    {
        b = i - 1;
        c = n - j;
    }
    else
	{
        b = j - 1;
        c = n - i;
	}

    if (a <= (b+c))
        cout << a;
    else
        cout << b + c;

    return 0;
}
