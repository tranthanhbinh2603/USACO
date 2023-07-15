#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    freopen("SOLUONGUOC.INP", "r", stdin);
    freopen("SOLUONGUOC.OUT", "w", stdout);
    int n; cin >> n;
    int hsh[10]{0};
    for (int i = 0; i < n; i++)
    {
        int k; cin >> k;
        if (k == 2) hsh[2]++;
        if (k == 3) hsh[3]++;
        if (k == 4) hsh[2]+= 2;
        if (k == 5) hsh[5]++;
        if (k == 6){
            hsh[2]++;
            hsh[3]++;
        }
        if (k == 7){
            hsh[7]++;
        }
        if (k == 8){
            hsh[2]+=3;
        }
        if (k == 9){
            hsh[3]+=2;
        }
    }
    int res {1};
    for (int i = 2; i <= 9; i++)
        if (hsh[i] != 0) res *= hsh[i] + 1;
    cout << res;
    return 0;
}
