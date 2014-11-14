#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, a, b;

    cin >> n >> a >> b;
    cout << n * a * b * 2;

    return 0;
}
