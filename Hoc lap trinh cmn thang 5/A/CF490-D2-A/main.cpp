#include <iostream>
#include <vector>
using namespace std;

int main()
{
    freopen("d.inp", "r", stdin);
    vector<int> a, b, c;
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        int d; cin >> d;
        if (d == 1)
            a.push_back(i);
        if (d == 2)
            b.push_back(i);
        if (d == 3)
            c.push_back(i);
    }
    if (a.size() == 0 || b.size() == 0 ||s c.size() == 0)
        cout << 0;
    else {
        int mi = min(a.size(), min(b.size(), c.size()));
        cout << mi << "\n";
        for (int i = 0; i < mi; i++)
            cout << a[i] << " " << b[i] << " " << c[i] << "\n";
    }
}
