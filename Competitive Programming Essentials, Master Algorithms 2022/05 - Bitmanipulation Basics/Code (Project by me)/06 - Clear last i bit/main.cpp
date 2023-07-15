#include <iostream>

using namespace std;

int main()
{
    // 101010101
    //&111110000
    //=101010000
    //Chú ý: Dãy full 1 (11111....) => -1
    int a, b;
    cin >> a >> b;
    int mash = (-1 << b);
    cout << (a & mash);

}
