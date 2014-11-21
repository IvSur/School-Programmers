/******************************************************
*  URL: http://acm.dvpion.ru/?main=task&id_task=324   *
*******************************************************/

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    string n;

    cin >> n;

    if ((n[0] == n[3]) && (n[1] == n[2]))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
