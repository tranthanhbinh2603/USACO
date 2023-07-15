#include <iostream>
#include <cstdio>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("GIANUOC.INP", "r", stdin);
    freopen("GIANUOC.OUT", "w", stdout);

    ll a,b; cin >> a >> b;
    ll c = b - a;
    if (c < 10) cout << c * 5800;
    else if (c < 20) cout << 10 * 5800 + (c - 10) * 8500;
    else if (c < 30) cout << 10 * 5800 + 10 * 8500 + (c - 20) * 10000;
    else cout << 10 * 5800 + 10 * 8500 + 10 * 10000 + (c - 30) * 12800;
}
