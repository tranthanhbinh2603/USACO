#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("BONGHOA.INP", "r", stdin);
    freopen("BONGHOA.OUT", "w", stdout);

    double n; cin >> n;
    cout << fixed << setprecision(2) << (((n / 2) * (n / 2)) * 3.14 * 2) - (n * n);
}
