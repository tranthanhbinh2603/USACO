#include <iostream>
#include <vector>
using namespace std;

int main()
{
    freopen("r.inp", "r", stdin);
    freopen("r.out", "w", stdout);
    vector<int> a;
    int n; cin >> n;
    while (n != 0){
        a.push_back(n); cin >> n;
    }
    vector <bool> tt (a.size(), false);
    for (int i = 1; i <= a.size(); i++){
        for (int z = 0; z < a.size(); z++)
            if (a[z] % i == 0) tt[z] = !tt[z];
    }
    for (auto i : tt)
        if (i) cout << "yes\n"; else cout << "no\n";
}
