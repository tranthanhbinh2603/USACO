#include <iostream>

using namespace std;

int main()
{
    //Thay:
    // 01010101
    //&11101111
    //=01000101
    //11101111 la dao nguoc cua day 0001000
    int a, b; cin >> a >> b;
    int mask = ~(1 << b);
    a = a & mask;
    cout << a;
}
