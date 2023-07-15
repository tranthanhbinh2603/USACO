#include <iostream>

using namespace std;

int main()
{
    // 1011111110, replace data = 0100, from 2
    // 1011111110 clear from 2 to 5 is 1011000010
    // 0100 << 2 = 010000
    // 1011000010
    //|    010000
    //=1011010010

    int a, b, c, d; //a is from, b is to, c is w_from, d is w_to
    //Ex 766 4 2 5 => 722
    cin >> a >> b >> c >> d;
    int mask_l = (-1 << (d + 1));
    int mask_2 = ~(-1 << c);
    int mask_3 = (mask_l | mask_2);
    a = a & mask_3;
    int mask_4 = (b << c);
    cout << (a | mask_4);

}
