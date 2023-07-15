#include <iostream>

using namespace std;

int pibo1(int n){
    if (n <= 2) return 1;
    else return pibo1(n-1) + pibo1(n-2);
}

int a[1000] {0};
void pibo2(int n){
    a[1] = a[2] = 1;
    if (n <= 2) return;
    if (a[n - 1] == 0) pibo2(n - 1);
    a[n] = a[n - 1] + a[n - 2];
}

int main()
{
    int k = 3;
    pibo2(k);
    cout << a[k];
}
