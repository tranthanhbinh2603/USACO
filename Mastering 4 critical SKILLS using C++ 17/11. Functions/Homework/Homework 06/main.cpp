#include <iostream>

using namespace std;

bool isPrime(int n){
    if (n < 1) return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0) return false;
    return true;
}

int nth_prime(int n)
{
    int i = 0, ind = 2;
    while (i < n){
        if (isPrime(ind)) i++;
        ind++;
    }
    return ind - 1;
}

int main()
{
    cout << nth_prime(6);
}
