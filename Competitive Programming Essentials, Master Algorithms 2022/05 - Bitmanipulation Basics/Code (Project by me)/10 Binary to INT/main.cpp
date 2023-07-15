#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int pow {1}, ans {0};
    while (n > 0){
        ans += pow * (n & 1);
        pow *= 10;
        n = n >> 1;
    }
    cout << ans;
}
