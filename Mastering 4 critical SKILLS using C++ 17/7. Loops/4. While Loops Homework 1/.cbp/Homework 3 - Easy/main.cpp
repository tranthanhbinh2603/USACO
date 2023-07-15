#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 1;
    while (s <= n){
        int s2 = 1;
        while (s2 <= s) {
            cout << "*";
            s2++;
        }
        cout << "\n";
        s++;
    }
}
