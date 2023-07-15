#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t; while (t--){
        string a, b; cin >> a >> b;
        int ind_b = 0;
        for (int i = 0; i < a.size(); i++){
            if (a[i] == b[ind_b])
                ind_b++;
        }
        if (ind_b == b.size()) cout << "YES\n"; else cout << "NO\n";
    }
}
