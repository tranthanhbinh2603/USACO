#include <iostream>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;

bool binary_serech(long long int a[], long long int n, int size){
    int st = 0, en = size, eps;
    while (st < en - 1)
    {
        eps = (st + en) / 2;
        if (a[eps] == n) return true;
        else if (a[eps] > n) en = eps; else st = eps;
    }
    return false;
}

int main()
{
   int n; cin >> n;
   long long int a[n], b[n], c[n];
   map<long long int, int> ma, mb, mc;

    for (int i = 0; i < n; i++){
        cin >> a[i];
        ma[a[i]]++;
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    for (int i = 0; i < n; i++){
        cin >> c[i];
    }
    sort(a, a+n);
    long long int res = 0;
    for (int i = 0; i < n; i++){
        for (int z = i; z < n; z++){
            long long int sum = sqrt(b[i] * b[i] + c[z] * c[z]);
            long long int dec = sqrt(abs(b[i] * b[i] - c[z] * c[z]));
            if (binary_serech(a, sum, n))
                res += ma[sum];
            else if (binary_serech(a, dec, n))
                res += ma[dec];
        }
    }
    cout << res;
}
