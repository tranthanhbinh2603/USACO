#include <iostream>

using namespace std;

int main()
{
    freopen("d.inp","r", stdin);
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int lo_1 = (n / k + (n % k != 0)) *t;
    int lo_2 {0};
    int slb = n - (d >= 2 * t ? d / t : 1) * k;
    lo_2 += (d >= 2 * t ? d / t : 1) * t;
    cout << lo_2;
}
