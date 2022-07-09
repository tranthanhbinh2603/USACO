/*Ro rang ta khong can xu ly chuoi, ta chi can lap chuoi ma thoi!*/
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k;
    cin >> m >> n >> k;

    string one_line; string max_one_line;
    for (int i = 0; i < m; i++)
    {
        max_one_line = one_line = "";
        cin >> one_line;
        for (int z = 0; z < n; z++)
            for (int y = 0; y < k; y++)
                max_one_line += one_line[z];
         for (int y = 0; y < k; y++)
            cout << max_one_line << "\n";
    }
}
