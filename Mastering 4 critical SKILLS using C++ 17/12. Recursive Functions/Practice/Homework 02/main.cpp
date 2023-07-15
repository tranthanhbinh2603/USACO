#include <iostream>

using namespace std;

void three_n_plus_one(int n){
    cout << n << " ";
    if (n == 1) return;
    else{
        if (n % 2 == 0){
            three_n_plus_one(n / 2);
        }
        else {
            three_n_plus_one(3 * n + 1);
        }
    }
}

int main()
{
    three_n_plus_one(7);
}
