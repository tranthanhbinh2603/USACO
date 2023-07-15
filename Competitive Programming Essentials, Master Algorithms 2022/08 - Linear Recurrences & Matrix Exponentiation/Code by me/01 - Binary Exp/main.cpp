#include <iostream>

using namespace std;

int main()
{
    long long int a, b; //a ^ b;
    cin >> a >> b;
    long long int cnt {0}, ans {1};
    while (b > 0){
        if (b & 1) ans *= a;
        a *= a;
        b >>= 1;
    }
    cout << ans;
}
