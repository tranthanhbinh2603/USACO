#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("BITLAND.INP", "r", stdin);
    freopen("BITLAND.OUT", "w", stdout);

    int n; cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int ma {-1};
    for (int i = 1; i < n - 1; i++)
    for (int j = 1; j < n - 1; j++){
        int sum {0}; bool isNega = false;
        for (int n = i - 1; n <= i + 1; n++)
            for (int m = j - 1; m <= j + 1; m++){
                if (a[n][m] < 0)
                    isNega = true;
                sum+=a[n][m];
            }
        if (ma < sum && isNega == false) ma = sum;
    }
    cout << ma;
}
