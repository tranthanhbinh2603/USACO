/*
Input:
1 2 3
Output:
1

Warning: Check all case test to correct
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if (b <= a)
        if (b <= c)
            cout << b;
        else
            cout << c;
    else cout << a;
}
