#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int a[500+10] {-1};
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        a[temp] = i;
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++){
        int k; cin >> k;
        if (a[k] != 0) cout << a[k] << "\n"; else cout << -1 << "\n";
    }
}
