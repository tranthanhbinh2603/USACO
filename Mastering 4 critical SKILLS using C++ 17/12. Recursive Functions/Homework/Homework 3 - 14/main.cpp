//That ra day la 3.15!!!!
#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n, int cou = 2){
    if (cou >= sqrt(n)) return true;
    else return isPrime(n, cou + 1) && (n % cou != 0);
}

static int kq = 0;
int count_primes(int start, int end)
{
    if (start > end) return kq;
    else
    {
        if (isPrime(start)) kq++;
        return count_primes(start + 1, end);
    }
}

int main()
{
    cout << count_primes(10, 500000); //So lon qua se tran bo nho.
}
