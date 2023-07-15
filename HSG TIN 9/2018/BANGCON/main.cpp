#include <iostream>
#include <cstdio>
using namespace std;

char a[n+1][m+1], b[n+1][m+1];

//Dung 1 ham xet 2 bang con co trung nhau khong
bool check_Table(int xA, int yA, int xB, int yB, int sz_col, int sz_row){
    for (int i = 1; i <= sz_col; i++)
        for (int z = 1; z <= sz_row; z++)
            if (a[xA + i - 1][yA + z - 1] != b[xB + i - 1][yB + z - 1])
                return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("BANGCON.INP", "r", stdin);
    freopen("BANGCON.OUT", "w", stdout);

    int ma {0};
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[n][m];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> b[n][m];
    for (int i = 1; i <= m; i++)
        for (int z = 1; z <= n; z++)
            for (int xA = 1; xA <= m-i+1; xA++)
                for (int yA = 1; yA <= n-z+1; yA++)
                    for (int xB = 1; xB <= m-i+1; xA++)
                        for (int yB = 1; yB <= n-z+1; yA++)
                            if (check_Table(xA, yA, xB, yB, i, z))
                                if (ma < i * j) ma = i * j;
    cout << ma;
}
