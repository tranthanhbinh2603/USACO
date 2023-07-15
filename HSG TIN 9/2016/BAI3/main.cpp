#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);

    int x, y, h; cin >> x >> y >> h;
    if ((h-y)%(x-y) != 0) cout << (h-y) / (x-y) + 1;
    else cout << (h - y) / (x - y);
}
