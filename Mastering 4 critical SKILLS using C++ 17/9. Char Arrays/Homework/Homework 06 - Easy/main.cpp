#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s; char pre = ' ';
    for (int i = 0; i < s.size(); i++)
        if (i == 0) {pre = s[i]; cout <<s[i];}
        else{
            if (s[i] == pre) cout << s[i]; else cout << " " << s[i];
            pre = s[i];
        }

}
