#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("BAI4.INP", "r", stdin);
    freopen("BAI4.OUT", "w", stdout);

    string s, s1;
    getline(cin, s);
    getline(cin, s1);
    int hsh1[10]{0}, hsh2[10]{0};
    for (int i = 0; i < s.size(); i++)
        hsh1[(int)(s[i] - '0')]++;
    for (int i = 0; i < s1.size(); i++)
        hsh2[(int)(s1[i] - '0')]++;
    for (int i = 9; i >= 0; i--)
        if (hsh1[i] != 0 && hsh2[i] != 0)
            cout << i;
}
