#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("CHUSO.INP", "r", stdin);
    freopen("CHUSO.OUT", "w", stdout);

    int n, m; cin >> m >> n;
    int res = 1;
    for (int i = 1; i <= n; i++){
        res = res * m % 10;
    }
    cout << res;
}
