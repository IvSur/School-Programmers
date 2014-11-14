#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    int n, k, i, q;
    const int a = 437;

    cin >> n;

    q = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> k;
        if (k <= a)
        {
            q = i;
            break;
        }
    }

    if (q == 0)
        cout << "No crash";
    else
        cout << "Crash " << q;

    return 0;
}
