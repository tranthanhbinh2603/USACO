#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int res {0};
    while (n--){
        int cnt {0};
        for (int i = 0; i < 3; i++){
            int t; cin >> t; cnt += t;
        }
        if (cnt >= 2) res++;
    }
    cout << res;
}
