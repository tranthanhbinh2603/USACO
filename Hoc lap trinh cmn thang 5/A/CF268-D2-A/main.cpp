#include <iostream>

using namespace std;

int main()
{
    //freopen("d.inp", "r", stdin);
    int n; cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    int cnt {0};
    for (int i = 0; i < n; i++)
        for (int z = 0; z < n; z++)
            if (i != z && a[i] == b[z])
                cnt++;
    cout << cnt;
}
