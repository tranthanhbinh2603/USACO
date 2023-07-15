#include <iostream>

using namespace std;

int main()
{
    //freopen("d.inp", "r", stdin);
    string s; getline(cin, s);
    int hsh[125] {0};
    int cnt {0};
    for (int i = 1; i <= s.size(); i+=3)
        hsh[(int)s[i]]++;
    for (int i = 0; i < 125; i++)
        if (hsh[i]) cnt++;
    cout << cnt;
}
