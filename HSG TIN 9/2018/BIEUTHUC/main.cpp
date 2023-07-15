#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("BIEUTHUC.INP","r",stdin);
    freopen("BIEUTHUC.OUT","w",stdout);

    string s; getline(cin, s);
    char pre {'+'}; long long int res{0}; int temp {0};
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '-' || s[i] == '+'){
            if (pre == '+')
                res += temp;
            else
                res -= temp;
            pre = s[i];
            temp = 0;
        }
        else temp = temp * 10 + ((int)s[i] - '0');
    }
    if (pre == '+')
        res += temp;
    else
        res -= temp;
    cout << res;
}
