#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a,b,c,min,max;
    c = 0;
    max = -10000;
    min = 10000;
    while (cin >> a)
    {
        c = c + 1;
        if (c % 2 == 0)
        {
            if (a >= max)
		max = a;
        }
        else
        {
            if (a <= min)
		min = a;
        }
    }

    cout << max + min;

    return 0;
}
