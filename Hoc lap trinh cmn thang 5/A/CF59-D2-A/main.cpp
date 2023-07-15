#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cnt_up {0}, cnt_low {0};
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (((int)s[i] >= 97) && ((int)s[i] <= 122))
            cnt_low++;
        else
            cnt_up++;
    }
    if (cnt_up > cnt_low){
        for (int i = 0; i < s.size(); i++)
            s[i] = toupper(s[i]);
    }
    else {
        for (int i = 0; i < s.size(); i++)
            s[i] = tolower(s[i]);
    }
    cout << s;
}
