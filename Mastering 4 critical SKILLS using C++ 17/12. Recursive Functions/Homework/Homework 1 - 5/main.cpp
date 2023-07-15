#include <iostream>

using namespace std;

double average(int arr[], int len, int len2){
    if (len == 1)
        return arr[0] * 1.0 / len2;
    double sub_res = average(arr, len - 1, len2);
    return (arr[len - 1] * 1.0 / len2)+ sub_res;
}

int main()
{
    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << average(a, n, n);
    return 0;
}
