//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=608&page=show_problem&problem=2595
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("t.inp", "r", stdin);
    freopen("t.out", "w", stdout);
    int n;
    while (cin >> n){
        int res {INT_MAX};
        int bug, num_ho, num_week;
        cin >> bug >> num_ho >> num_week;
        for (int i = 0; i < num_ho; i++){
            int cost; cin >> cost;
            for (int z = 0; z < num_week; z++){
                int t; cin >> t;
                if (t > n && cost * n <= bug && res > cost * n)
                    res = cost * n;
            }
        }
        if (res != INT_MAX) cout << res << "\n"; else cout << "stay home\n";
    }
}
