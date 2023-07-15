#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int res = 0;
        for (int z = 1; z <= n; z++)
        {
            int a;
            cin >> a;
            int res2 = 1;
            for (int y = 1; y <= z; y++)
                res2 *= a;
            res += res2;
        }
        cout << res << "\n";
    }
}
