#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << (n / 360) << " " << (n - (n / 360) * 360) / 30 << " " << n - (n / 30) * 30;
}

