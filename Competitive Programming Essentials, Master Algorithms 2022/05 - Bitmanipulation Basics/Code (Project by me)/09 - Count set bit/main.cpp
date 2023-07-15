#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int cnt {0};
    //Slower
//    while (n > 0){
//        if (n & 1 == 1) cnt++;
//        n = n >> 1;
//    }
    //Faster
    //n & (n-1) => Vd 7 la 111, 6 la 110. 7 & 6 = 110. 6 la 110, 5 la 101, 6&5=100.
    //Tuc la loai tru tung bit 1 trong day
    while (n > 0){
        n = n & (n - 1);
        cnt++;
    }
    cout << cnt;
}
