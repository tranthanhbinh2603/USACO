#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    map<string, vector<string>> m;
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num; cin >> num;
        vector <string> name; string full_name;
        for (int z = 0; z < num; z++)
        {
            string s; cin >> s;
            if (z)
                full_name+=" ";
            full_name += s;
            name.push_back(full_name);
        }
        for (auto n: name)
            m[n].push_back(full_name);
    }
    int q; cin >> q;
    while (q--){
        int num; cin >> num; string s_query;
        for (int i = 0; i < num; i++)
        {
            string s; cin >> s;
            if (i)
                s_query+=" ";
            s_query += s;
        }
        for (auto i: m[s_query])
            cout << i << " - ";
    }
}
