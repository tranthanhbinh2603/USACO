//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=2493
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("t.inp", "r", stdin);
    //freopen("t.out", "w", stdout);
    int n; cin >> n;
    while (n != 0){
        int div_x, div_y; cin >> div_x >> div_y;
        for (int i = 0; i < n; i++){
            int x, y; cin >> x >> y;
            if (x == div_x || y == div_y)
                cout << "divisa\n";
            else if (x > div_x && y < div_y)
                cout << "SE\n";
            else if (x > div_x && y > div_y)
                cout << "NE\n";
            else if (x < div_x && y < div_y)
                cout << "SO\n";
            else cout << "NO\n";
        }
        cin >> n;
    }
}
