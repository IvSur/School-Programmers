#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    int a,b=1,c=0;
    cin>>a;
    if (a!=1)
    {
        while (a>b)
        {
            if (a!=b)
            {
                b=b*2;
            }
            if (a==b)
            {
                cout<<"YES";
                c++;
                break;
            }
        }
    }
    if (a==1)
    {
        cout<<"YES";
    }
    else if (c==0)
    {
        cout<<"NO";
    }

    return 0;
}
