#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    map<string, int> m;
    m["hacker"] = 1;
    m["role"] = 2;
    m["Some"] = 3;

    for (auto a: m)
        cout << a.first << " " << a.second << "\n";

    auto it = m.find("hacker");
    if (it != m.end())
        cout << "Find!";

    m.erase(m.begin());
    for (auto a: m)
        cout << a.first << " " << a.second << "\n";

    map<int, vector<int>> m2;
    vector<int> test;
    test.push_back(1);
    test.push_back(1);
    test.push_back(1);
    m2[1] = test;
    cout << m2[1].size();
    test.push_back(2);
    cout << m2[1].size();


    map<string, vector<string>> mp1;

	string key1 = "mostafa";
	vector<string> value1 = {"name1", "name2"};
	mp1[key1] = value1;

	string key2 = "john";
	vector<string> value2 = {"Hey", "How are u"};
	mp1[key2] = value2;

	for (const pair<string, vector<string>> & pair : mp1)
	{
		const string &key = pair.first;
		const vector<string> &value = pair.second;
		cout<<key<<"\n";
		for (auto i : value)
            cout << " " << i;
	}


}
