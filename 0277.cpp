#include <iostream>
#include <string>
#include <cstdio>
#include<sstream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    int d[3];
    string res, res1, res2, res3;
    ostringstream ost;

    for (int i = 0; i < 3; i++)
        cin >> d[i];

    /********************
    /*  первый элемент  *
    /********************/
    if (d[0] == 0)
        res1 = "";
    else
    {
        ost << d[0];
        res1 = ost.str();
    }

    ost.str("");

    /********************
    /*  второй элемент  *
    /********************/
    switch (d[1])
    {
    case 0:
        res2 = "";
        break;
    case 1:
        if (d[0] == 0)
        {
            res2 = "";
            break;
        }
        else
        {
            res2 = "+";
            break;
        }
    case -1:
        res2 = "-";
        break;
    default:
        if ((d[0] != 0) && (d[1] > 0))
        {
            ost << d[1];
            res2 = "+" + ost.str();
        }
        else if ((d[0] != 0) && (d[1] < 0))
        {
            ost << d[1];
            res2 = ost.str();
        }
        else if (d[0] == 0)
        {
            ost << d[1];
            res2 = ost.str();
        }
        break;
    }

    ost.str("");

    /********************
    /*  третий элемент  *
    /********************/
    switch (d[2])
    {
    case 0:
        res3 = "";
        break;
    case 1:
        if ((d[0] == 0) && (d[1] == 0))
        {
            res3 = "";
            break;
        }
        else
        {
            res3 = "+";
            break;
        }
    case -1:
        res3 = "-";
        break;
    default:
        if (((d[1] != 0) && (d[2] > 0)) || ((d[1] == 0) && (d[2] > 0)))
        {
            ost << d[2];
            res3 = "+" + ost.str();
        }
        else if (((d[1] != 0) && (d[2] < 0)) || ((d[1] == 0) && (d[2] < 0)))
        {
            ost << d[2];
            res3 = ost.str();
        }
        break;
    }

    ost.str("");

    if ((d[0] == 0) && (d[1] == 0) && (d[2] == 0))
        cout << "0";
    else if ((d[1] == 0) && (d[2] != 0))
        cout << res1 + res3 << "y";
    else if ((d[2] == 0) && (d[1] != 0))
        cout << res1 + res2 << "x";
    else if ((d[1] == 0) && (d[2] == 0))
        cout << res1;
    else
        cout << res1 + res2 << "x" << res3 << "y";

    return 0;
}
