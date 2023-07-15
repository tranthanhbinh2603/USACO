#include <iostream>

using namespace std;

int sum(int arr[], int len){
    if (len == 0) return arr[0];
    else return sum(arr, len - 1) + arr[len - 1];
}

int main()
{
    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << sum(a, n) - a[0];
    return 0;
}
