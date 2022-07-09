/*Solu: danh dau 5 so la a, b, c, d, e
Lay a * b + d *2 va a * c + e *2. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;

    if (s * v1 + t1 * 2 < s * v2 + t2 * 2)
        cout << "First";
    if (s * v1 + t1 * 2 > s * v2 + t2 * 2)
        cout << "Second";
    if (s * v1 + t1 * 2 == s * v2 + t2 * 2)
        cout << "Friendship";
}
