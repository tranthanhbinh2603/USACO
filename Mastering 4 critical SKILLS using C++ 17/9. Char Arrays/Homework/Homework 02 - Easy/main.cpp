#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        string a, b;
        cin >> a >> b;
        int b_size = b.size() - 1;
        int a_size = a.size() - 1;
        for (int i = 0; i < b.size(); i++)
        {
            if (a[a_size] != b[b_size]){
                cout << "NO\n";
                break;
            }
            a_size--; b_size--;
            if (i = b.size() - 1) cout << "YES\n";
        }
    }

}
