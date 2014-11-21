/***************************************************
* URL: http://acm.dvpion.ru/?main=task&id_task=685 *
****************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    int i, j, a[3], b[3], temp;

    for (i = 0; i < 3; i++)
        cin >> a[i];

    for (i = 0; i < 3; i++)
        cin >> b[i];

    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (b[i] < b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    temp = 0;
    for (i = 0; i < 3; i++)
    {
        temp += (a[i] * b[i]);
    }
    cout << temp << endl;

    return 0;
}
