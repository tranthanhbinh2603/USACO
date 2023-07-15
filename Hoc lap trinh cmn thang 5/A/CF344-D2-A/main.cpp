#include <iostream>

using namespace std;

int main()
{
    freopen("data.inp", "r", stdin);
    int n; cin >> n;
    string s; cin >> s;
    int cnt {1};
    char pre = s[1];
    for (int i = 0; i < n - 1; i++){
        cin >> s;
        if (s[0] == pre)
            cnt++;
        pre = s[1];
    }
    cout << cnt;
    cout << "1";
}
