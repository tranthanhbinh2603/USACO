#include <iostream>

using namespace std;

int main()
{
    //freopen("data.inp","r", stdin);
    int a, b, c, d; cin >> a >> b >> c >> d;
    string s; cin >> s;
    int res {0};
    for (int i = 0; i < s.size(); i++)
    {
        int n = (int)(s[i] - '0');
        if (n == 1)
            res += a;
        else if (n == 2)
            res += b;
        else if (n == 3)
            res += c;
        else if (n == 4)
            res += d;
    }
    cout << res;
}
