#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int sz = s.size();
    for (int i = 0; i < (1 << sz); i++){
        int cpi = i;
        int idx = 0;
        while (cpi > 0){
            if ((cpi & 1) == 1) cout << s[idx];
            idx++;
            cpi = (cpi >> 1);
        }
        cout << "\n";
    }
}
