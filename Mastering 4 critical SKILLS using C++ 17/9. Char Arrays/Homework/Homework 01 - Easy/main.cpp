#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--){
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < b.size(); i++)
        {
            if (a[i] != b[i]) {
                cout << "NO";
                break;
            }
            if (i == b.size() - 1) cout << "YES";
        }
    }

}
