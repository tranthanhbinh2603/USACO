#include <iostream>

using namespace std;

int main()
{
    int len, diff; cin >> len >> diff;
    int idx {-1};
    for (int i = 0; i < len; i++){
        idx = idx + 1;
        if (idx >= diff) idx = 0;
        cout << (char)(97 + idx);
    }
}
