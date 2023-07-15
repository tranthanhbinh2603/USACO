#include <iostream>

using namespace std;

void array_increment(int arr[], int len){
    if (len == 0) return;
    else {
        arr[len - 1] += len - 1;
        array_increment(arr, len - 1);
    }
}

int main()
{
    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    array_increment(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
 }
