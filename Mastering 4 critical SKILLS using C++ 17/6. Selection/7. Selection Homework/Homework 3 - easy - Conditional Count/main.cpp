#include <iostream>

using namespace std;

int main()
{
    int x, a, b, c, d, e;
    cin >> x >> a >> b >> c >> d >> e;

    int more_x = 0;
    int less_x = 0;
    if (a > x)
        more_x++;
    else
        less_x++;
    if (b > x)
        more_x++;
    else
        less_x++;
    if (c > x)
        more_x++;
    else
        less_x++;
    if (d > x)
        more_x++;
    else
        less_x++;
    if (e > x)
        more_x++;
    else
        less_x++;

    cout << less_x << " " << more_x;
}
