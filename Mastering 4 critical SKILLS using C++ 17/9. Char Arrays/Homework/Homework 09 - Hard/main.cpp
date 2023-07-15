#include <iostream>

using namespace std;

int main()
{
    string a; cin >> a;
    bool isMind = false;
    int sum = (int)a[a.size() - 1] - '0' + 5 + isMind;
    if (sum >= 10) isMind = true;
    a[a.size() - 1] = (char)(sum % 10 + '0');
    sum = (int)a[a.size() - 2] - '0' + 5 + isMind;
    if (sum >= 10) isMind = true; else isMind = false;
    a[a.size() - 2] = (char)(sum % 10 + '0');
    sum = (int)a[a.size() - 3] - '0' + 5 + isMind;
    if (sum >= 10) isMind = true; else isMind = false;
    a[a.size() - 3] = (char)(sum % 10 + '0');
    sum = (int)a[a.size() - 4] - '0' + 5 + isMind;
    if (sum >= 10) isMind = true; else isMind = false;
    a[a.size() - 4] = (char)(sum % 10 + '0');
    for (int i = a.size() - 5; i >= 0; i--){
        if ((a[i] == '9') && (isMind)) a[i] = '0';
        else if ((a[i] != '9') && (isMind)){
            a[i] = (char)((int)a[i] - '0' + isMind + '0');
            isMind = false;
            break;
        }
    }
    if (isMind) a = '1' + a;
    cout << a;
}
