#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++)
        for (int z = 0; z < m; z++)
            cin >> a[i][z];
    long long int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    for (int i = 0; i < n; i++)
    for (int z = 0; z < m; z++){
        if (i == z) sum1+=a[i][z];
        if (z == n - i) sum2 += a[i][z];
        if (i == n - 1) sum3 += a[i][z];
        if (z == m - 1) sum4 += a[i][z];
    }
    cout << sum1 << " " << sum2 << "\n" << sum3 << " " << sum4;
}
