#include <iostream>

using namespace std;

int main()
{
    int n, m; cin >> n >> m; int a[n][m];
    for (int i = 0; i < n; i++)
        for (int z = 0; z < m; z++)
            cin >> a[i][z];
    int b[m][n];
    for (int i = 0; i < n; i++)
        for (int z = 0; z < m; z++)
            b[z][i] = a[i][z];
    for (int i = 0; i < m; i++){
        for (int z = 0; z < n; z++)
            cout << b[i][z] << " ";
        cout << "\n";
    }


}
