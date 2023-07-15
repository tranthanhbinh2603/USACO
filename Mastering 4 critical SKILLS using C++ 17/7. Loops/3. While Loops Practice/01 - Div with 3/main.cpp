#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int s = 1;
    while (s <= x){
        if (s % 3 == 0) cout << s << "\n";
        s++;
    }
}
