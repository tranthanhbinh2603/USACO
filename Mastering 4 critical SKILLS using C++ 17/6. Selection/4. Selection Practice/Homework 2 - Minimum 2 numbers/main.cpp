/*
Input:
1 2

Output:
1
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a <= b)
        cout << a;
    else
        cout << b;
}
