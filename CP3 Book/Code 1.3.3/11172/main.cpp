//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=2113
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int q; cin >> q;
    while (q--){
        long long a, b; cin >> a >> b;
        if (a > b)
            cout << ">\n";
        else if (a < b)
            cout << "<\n";
        else if (a == b)
            cout << "=\n";
    }
}
