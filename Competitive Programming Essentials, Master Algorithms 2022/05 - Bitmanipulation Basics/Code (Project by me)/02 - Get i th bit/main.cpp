#include <iostream>

using namespace std;

int main()
{
    //Ta thay:
    //0001 >> 1: 0000. Sau do &1 ra bit dau tien
    //101011 >> 3  ra 101 &1 ra bit dau tien
    //(a >> b) & 1 se cho ra bit thu b cua day bit a
    int a, b; cin >> a >> b;
    int mash = (a >> b);
    int ans = (mash & 1);
    cout << ans << "\n";

    //Cach 2:
    // 101011
    //&001000
    //=001000

    // 101111
    //&010000
    //=000000
    int mash2 = (1 << b);
    int ans2 = (a & mash2) > 0 ? 1 : 0;
    cout << ans2;
}
