#include <iostream>

using namespace std;

int main()
{
    int n, m; cin >> n >> m; int a[n][m];
    for (int i = 0; i < n; i++)
        for (int z = 0; z < m; z++)
            cin >> a[i][z];
    int f, s; cin >> f >> s;
    int row = 0;
    while (row < n){
        int temp = a[row][f];
        a[row][f] = a[row][s];
        a[row++][s] = temp;
    }
    for (int i = 0; i < n; i++){
         for (int z = 0; z < m; z++)
            cout << a[i][z] << " ";
        cout << "\n";
    }


}
