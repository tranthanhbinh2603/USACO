#include <iostream>
#include <cstdio>
using namespace std;

const int ma = 1e6+10;
bool prime[ma];
void sinh_sang(){
    prime[1] = false;
    for (int i = 2; i <= ma; i++)
        prime[i] = true;
    for (int i = 2; i <= ma; i++)
        if (prime[i] == true)
            for (int j = 2 * i; j <= ma; j+=i)
                prime[j] = false;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("PRIME.INP", "r", stdin);
    freopen("PRIME.OUT", "w", stdout);

    sinh_sang();
    int m, n; cin >> m >> n;
    int kq {0};
    if (prime[m] == true)
        cout << 0;
    else {
        for (int i = n; i >= 2; i--)
            if (prime[i] == true && m % i == 0){
                cout << i << " ";
                kq = i;
                break;
            }
    }
    if (prime[n + n - kq] == true && m % (n + n - kq) == 0)
        cout << n + n - kq;
}
