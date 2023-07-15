#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int res = 1;
    char prev = s[0]; int hhhh = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (prev == s[i])
            hhhh++;
        else {
            if (res < hhhh) res = hhhh;
            hhhh = 1;
            prev = s[i];
        }
    }
    if (res < hhhh)
        res = hhhh;
    cout << res;
}
