#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
    map<string, set<string>> m;
    int n; cin >> n;
    while (n--){
        string s; cin >> s;
        string te = "";
        for (auto i: s){
            te += i;
            m[te].insert(s);
        }
    }
    int q; cin >> q;
    while (q--){
        string s; cin >> s;
        if (m.find(s) != m.end())
            for (auto i : m[s])
                cout << i << "\n";
        else cout << "NO RESULT!\n";
    }
}
