#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool is_odd = (n % 2 == 1);
    bool is_even = (n % 2 == 0);

    cout << 7 * is_odd + 100 * is_even;
}
