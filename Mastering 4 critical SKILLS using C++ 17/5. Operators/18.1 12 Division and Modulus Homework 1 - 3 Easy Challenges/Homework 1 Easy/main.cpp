#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    cout << (a + b + c + d + e) / 5 << "\n";
    cout << (a + b + c) / (d + e) << "\n";
    cout << ((a + b + c) / 3) / ((d + e)/2);
}
