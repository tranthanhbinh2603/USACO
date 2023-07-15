#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("CAU3.INP", "r", stdin);
    freopen("CAU3.OUT", "w", stdout);

    string ans {""}; int max_ans {0};
    while (true){
        string s; cin >> s;
        int hsh[123] {0};
        for (int i = 0; i < s.size(); i++)
            hsh[(int)s[i]]++;
        int cnt = 0;
        for (int i = 0; i <= 122; i++)
            if (hsh[i] >= 1) cnt++;
        if (max_ans < cnt){
            ans = s;
            max_ans = cnt;
        }
        if (s == "\0") break;
    }
    cout << ans;
}
