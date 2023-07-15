#include <iostream>

using namespace std;

int main()
{
    //freopen("d.inp", "r", stdin);
    int m[256] {0};
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++)
        m[(int)s[i]]++;
    int cnt {0};
    for (int i = 0; i < 256; i++)
        if (m[i] != 0) cnt++;
    if (cnt % 2 == 0) cout << "CHAT WITH HER!"; else cout << "IGNORE HIM!";
}
