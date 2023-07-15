#include <iostream>

using namespace std;

int main()
{
    int s1, e1, s2, e2;
    cin >> s1 >> e1 >> s2 >> e2;

    int res_s, res_e;
    if (s1 > s2) res_s = s1; else res_s = s2;
    if (e1 > e2) res_e = e2; else res_e = e1;

    cout << res_s << " " << res_e;
}
