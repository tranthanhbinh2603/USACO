#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1; cin >> s2;

    string s1_u {""}, s2_u {""};
    for (int i = 0; i < s1.size(); i++)
        s1_u += toupper(s1[i]);
    for (int i = 0; i < s2.size(); i++)
        s2_u += toupper(s2[i]);
    if (s1_u > s2_u) cout << "1"; else if (s1_u < ss2_u) cout << "-1"; else cout << "0";
}
