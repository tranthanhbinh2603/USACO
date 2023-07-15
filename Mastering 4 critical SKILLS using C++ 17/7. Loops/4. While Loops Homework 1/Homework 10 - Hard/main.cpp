#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int rev_n;
    while (n > 0){
        rev_n *= 10;
        rev_n += n % 10;
        n /= 10;
    }
    cout << rev_n << " " << rev_n * 3;
}
