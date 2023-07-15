#include <iostream>

using namespace std;

int main()
{
    int n, m; cin >> n >> m; int a[n][m];
    for (int i = 0; i < n; i++)
        for (int z = 0; z < m; z++)
            cin >> a[i][z];
    int t; cin >> t;
    while (t--)
    {
        int f, s; cin >> f >> s;
        for (int i = 0; i < m; i++){
            if (a[f - 1][i] > a[s - 1][i]) {cout << "NO\n"; break;}
            if (i == m - 1) cout << "YES\n";
        }

    }
}
