#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        string a, b;
        cin >> a >> b;
        bool isFind = false;
        for (int i = 0; i < a.size() - b.size() + 1; i++)
        {
            string temp;
            for (int z = 0; z < b.size(); z++)
                temp+=a[i+z];
            if (temp == b) {
                isFind = true;
                break;
            }
        }
        if (isFind) cout << "YES\n"; else cout <<"NO\n";
    }
}
