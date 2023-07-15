//https://codeforces.com/contest/734/problem/A
#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int cnt_d {0}, cnt_a{0};
    for (int i = 0; i < s.size(); i++)
        if (s[i] == 'D') cnt_d++; else cnt_a++;
    if (cnt_d > cnt_a)
        cout << "Danik";
    else if (cnt_d < cnt_a)
        cout << "Anton";
    else
        cout << "Friendship";
}
