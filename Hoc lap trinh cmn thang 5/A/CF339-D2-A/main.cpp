#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //freopen("d.inp", "r", stdin);
    vector<int> a;
    string s; cin >> s;
    for (int i = 0; i < s.size(); i+=2)
        a.push_back((int)(s[i] - '0'));
    sort(a.begin(), a.end());
    if (a.size() > 0) {
        cout << a[0];
        for (int i = 1; i < a.size(); i++)
            cout << "+" << a[i];
    }
}
