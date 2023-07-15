#include <iostream>

using namespace std;

string reverse_str(const string &str){
    string res = "";
    for (int i = str.size() - 1; i >= 0; i--){
        res.push_back(str[i]);
    }
    return res;
}

int main()
{
    string s; cin >> s;
    cout << reverse_str(s);
}
