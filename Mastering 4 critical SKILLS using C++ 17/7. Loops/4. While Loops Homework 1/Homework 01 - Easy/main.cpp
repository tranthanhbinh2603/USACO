#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int s = x;
    while (s <= y)
    {
        cout << s << "\n";
        s++;
    }
}
