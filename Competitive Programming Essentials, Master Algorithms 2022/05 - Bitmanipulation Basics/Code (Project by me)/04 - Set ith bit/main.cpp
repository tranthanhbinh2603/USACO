#include <iostream>

using namespace std;

int main()
{
    //Set bit
    int a, b; cin >> a >> b;
    int mask = (1 << b);
    cout << (a | mask);
}
