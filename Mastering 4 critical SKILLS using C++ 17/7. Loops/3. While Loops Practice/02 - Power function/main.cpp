#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int s = 2, res = x;
    while (s <= y){
        res *= x;
        s++;
    }
    cout << res;
}
