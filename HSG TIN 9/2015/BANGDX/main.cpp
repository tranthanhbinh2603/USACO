#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("BANGDX.INP", "r", stdin);
    freopen("BANGDX.OUT", "w", stdout);

    int csx {0}, csy {0};
    for (int i = 1; i <= 5; i++)
    for (int z = 1; z <= 5; z++){
        int temp;cin >> temp;
        if (temp == 1) {
            csx = i;
            csy = z;
        }
    }
    cout << abs(csx - 3) + abs(csy - 3);
    return 0;
}
