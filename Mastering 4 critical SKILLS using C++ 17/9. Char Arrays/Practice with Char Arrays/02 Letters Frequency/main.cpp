#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int hsh[123] {0};
    for (int i = 0; i < s.size(); i++)
        hsh[(int)s[i]]++;
    for (int i = 97; i <= 122; i++)
        if (hsh[i] > 0) cout << (char)i << " " << hsh[i] << "\n";
}
