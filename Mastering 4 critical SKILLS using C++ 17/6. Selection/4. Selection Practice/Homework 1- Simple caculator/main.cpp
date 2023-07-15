/*Caculator
Example:

Input:
2 + 3
Output:
5
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char c;

    cin >> a >> c >> b;

    if (c == '+')
        cout << a + b;
    else if (c == '-')
        cout << a - b;
    else if (c == '/')
        cout << a / b;
    else cout <<  a * b;
}
