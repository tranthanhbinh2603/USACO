#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> prime {2,3,5,7,11,13,15,17,23,27};
    int ans {0};
    for (int i = 1; i < (1 << prime.size()); i++){
        int temp = 1;
        for (int z = 0; z < prime.size(); z++)
            if ((i >> z) & 1) temp *= prime[z];
        if (__builtin_popcount(i) % 2 == 0)
            ans -= (n / temp);
        else
            ans += (n / temp);
    }
    cout << ans;
}
