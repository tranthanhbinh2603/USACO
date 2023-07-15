#include <iostream>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int mx_sz = s.size();

    if (t.size() > mx_sz) mx_sz = t.size();

    for (int i = 0; i < mx_sz; i++){
        if (i < s.size())
            cout << s[i];
        if (i < t.size())
            cout << t[i];
    }



}
