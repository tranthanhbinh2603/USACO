#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("CUUCHUOI.INP", "r", stdin);
    freopen("CUUCHUOI.OUT", "w", stdout);

    int n, x; cin >> n >> x;
    int res {0};
    while (n--){
        int a, b; cin >> a >> b;
        if (abs(b - a) <= x) res += max(a, b);
        else {
            int c; cin >> c;
            res += c;
        }
    }
    cout << res;
}
