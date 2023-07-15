#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s; int num = 0;
    for (int i = 0; i < s.size(); i++){
        num = num * 10 + (int)(s[i] - '0');
    }
    cout << num << " " << num * 3;

}
