#include <iostream>

using namespace std;

int arr_max(int arr[], int len){
    if (len == 0) return max(arr[len], arr[len+1]);
    else return max(arr[len-1], arr_max(arr, len - 1));
}

int main()
{
    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << arr_max(a, n);
    return 0;
}
