#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 0;
    while (s <= n)
    {
        if ((s % 8 == 0) || ((s % 3 == 0) && (s % 4 == 0))) cout << s << " ";
        s++;
    }
}
