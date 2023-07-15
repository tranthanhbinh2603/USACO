#include <iostream>

using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    int c = max(a,b);
    if (c == 1)
        cout << "1/1";
    else if (c == 2)
        cout << "5/6";
    else if (c == 3)
        cout << "2/3";
    else if (c == 4)
        cout << "1/2";
    else if (c == 5)
        cout << "1/3";
    else if (c == 6)
        cout << "1/6";
    else
        cout << "0/1";
}
