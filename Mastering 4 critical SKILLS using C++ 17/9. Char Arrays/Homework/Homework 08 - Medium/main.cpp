#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int a_size = a.size();
    int b_size = b.size();
    int small = b_size > a_size ? a_size : b_size;
    for (int i = 0; i < small; i++)
    {
        char c1 = a[i];
        char c2 = b[i];
        if (c1 > c2) {
            cout << "NO";
            return 0;
        }
        else if (c1 < c2) {
            cout << "YES";
            return 0;
        }
    }
    if (b_size < a_size) cout << "NO"; else cout << "YES";
}
