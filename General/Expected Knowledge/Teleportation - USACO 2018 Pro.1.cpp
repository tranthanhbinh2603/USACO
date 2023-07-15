/* Solu: 2 so dau tim min 2 so sau tim min
Lay 2 so min tru di va 2 so con lai tru di
Cuoi cung lay 2 so do cong lai*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int min1, min2, max1, max2;
    if (a > b)
    {
        min1 = b;
        max1 = a;
    }
    else
    {
        min1 = a;
        max1 = b;
    }

    if (x > y)
    {
        min2 = y;
        max2 = x;
    }
    else
    {
        min2 = x;
        max2 = y;
    }

    int sum1, sum2;
    if (min1 - min2 < 0)
    {
        sum1 = (min1 - min2) * (-1);
    }
    else
    {
        sum1 = (min1 - min2);
    }

    if (max1 - max2 < 0)
    {
        sum2 = (max1 - max2) * (-1);
    }
    else
    {
        sum2 = (max1 - max2);
    }
    cout << sum1 + sum2;
}
