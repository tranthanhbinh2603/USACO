#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>
using namespace std;

int main()
{
    freopen("TAOXAU.INP", "r", stdin);
    freopen("TAOXAU.OUT", "w", stdout);

    string a, b;
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.size(); i++)
        a[i] = toupper(a[i]);
    for (int i = 0; i < b.size(); i++)
        b[i] = toupper(b[i]);
    int a_c[91] {0}, b_c[91]{0};
    for (int i = 0; i < a.size(); i++)
        if (((((int)a[i] >= 65) || ((int) a[i] <= 90)) || (((int)a[i] >= 48) || ((int) a[i] <= 57))) && ((int)a[i] != 32))
            a_c[(int)a[i]]++;
    for (int i = 0; i < b.size(); i++)
        if ((((int)b[i] >= 65) || ((int) b[i] <= 90)) || (((int)b[i] >= 48) || ((int) b[i] <= 57)))
            b_c[(int)b[i]]++;
    bool isTrue = true;
    for (int i = 0; i < 91; i++){
        if (a_c[i] > b_c[i])
            isTrue = false;
    }
    if (isTrue) cout << 1; else cout << 0;
}
