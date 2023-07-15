#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--){
        int s = 1;
        while (s <= n + 1){
            cout << "*";
            s++;
        }
        cout << "\n";
    }
}
