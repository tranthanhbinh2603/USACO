#include <iostream>

using namespace std;

int main()
{
    //freopen("r.inp", "r", stdin);
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int idx {0};
    for (int i = 0; i < s2.size(); i++)
        if (s1[idx] == s2[i])
            idx++;
    cout << idx + 1;
}
