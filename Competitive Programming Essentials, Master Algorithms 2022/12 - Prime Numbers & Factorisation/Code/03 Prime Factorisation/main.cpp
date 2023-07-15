#include <iostream>
#include <math.h>
using namespace std;

void factorisation_1(int n){
    int idx = 2;
    while (n > 1){
        int cnt {0};
        while (n % idx == 0){
            n /= idx;
            cnt++;
        }
        if (cnt) cout << idx << "^" << cnt << "\n";
        idx++;
    }
}

void factorisation_2(int n){
    int idx = 2;
    while (idx < sqrt(n)){
        int cnt {0};
        while (n % idx == 0){
            n /= idx;
            cnt++;
        }
        if (cnt) cout << idx << "^" << cnt << "\n";
        idx++;
    }
    if (n != 1)
        cout << n << "^1\n";
}

int main()
{
    factorisation_2(388);
}
