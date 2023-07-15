//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=16&page=show_problem&problem=3399
#include <iostream>

using namespace std;

bool is_win(int a, int b, int c, int x, int y, int z){
    int i = 0;
    if (a < x) i++;
    if (b < y) i++;
    if (c < z) i++;
    return i >= 2;
}

bool check(int a, int b, int c, int x, int y, int z){
    if (z != a && z != b && z!=c&&z!=x&&z!=y)
    if (is_win(a, b, c, x, y, z))
    if (is_win(a, b, c, x, z, y))
    if (is_win(a, b, c, y, x, z))
    if (is_win(a, b, c, y, z, x))
    if (is_win(a, b, c, z, y, x))
    if (is_win(a, b, c, z, x, y))
        return true;
    return false;
}


int main()
{
    //freopen("r.inp", "r", stdin);
    //freopen("r.out", "w", stdout);
    int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
    while (a != 0){
        int res {-1};
        for (int i = 1; i < 53; i++){
            if (check(a, b, c, x, y, i))
                {res = i; break;}
        }
        cout << res << "\n";
        cin >> a >> b >> c >> x >> y;
    }
}
