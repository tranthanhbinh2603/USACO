#include <iostream>

using namespace std;

int main()
{
    //Update = clear + set
    int a, b, c;
    cin >> a >> b >> c;

    int ma1 = ~(1 << b);
    a = (a & ma1);

    int ma2 = (c << b);
    a = (a | ma2);

    cout << a << " ";
}
