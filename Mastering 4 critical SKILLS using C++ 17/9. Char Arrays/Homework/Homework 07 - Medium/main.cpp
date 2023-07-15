#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char pre; int cou = 0;
    for (int i = 0; i < s.size(); i++){
        if (i == 0) {pre = s[i]; cou++;}
        else if (s[i] == pre) {cou++;}
        else {cout << pre << cou << "_"; cou = 1; pre = s[i];}
    }
    cout << pre << cou;
}
