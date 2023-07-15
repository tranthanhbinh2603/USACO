#include <iostream>

using namespace std;

int main()
{
    //freopen("data.inp","r", stdin);
    int k; cin >> k; string s; cin >> s;
    int cnt {0};
    char prv = s[0];
    for (int i = 1; i < s.size(); i++){
        if (prv == s[i]) cnt++;
        prv = s[i];
    }
    cout << cnt;

}
