#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("r.inp", "r", stdin);
    freopen("w.inp", "w", stdout);
    int q; cin >> q;
    while (q--){
        char s; int a, b; cin >> s >> a >> b;
        if (q == 'r')
            cout << max(a, b) << "\n";
        else (q == 'k')
    }
}
