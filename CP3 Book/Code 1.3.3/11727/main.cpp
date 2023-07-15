//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=2827
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("t.inp", "r", stdin);
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        int a, b, c; cin >> a >> b >> c;
        int d = max(a,max(b, c));
        int e = min(a, min(b, c));
        if (a != d && a != e)
            cout << "Case " << i << ": " << a << "\n";
        else if (b != d && b != e)
            cout << "Case " << i << ": " << b << "\n";
        else cout << "Case " << i << ": " << c << "\n";
    }
}
