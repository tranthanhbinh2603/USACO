#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int result = -1;
    if ((a < 100) && (a > result))
        result = a;
    if ((b < 100) && (b > result))
        result = b;
    if ((c < 100) && (c > result))
        result = c;

    cout << result;

}
