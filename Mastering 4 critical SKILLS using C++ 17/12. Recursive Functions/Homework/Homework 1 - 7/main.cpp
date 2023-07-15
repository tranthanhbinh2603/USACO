#include <iostream>

using namespace std;

void accumulate_arr(int arr[], int len){
    if (len == 1) arr[0] = arr[0];
    else {
        accumulate_arr(arr, len - 1);
        arr[len - 1] = arr[len - 1] + arr[len - 2];

    }

}

int main()
{
    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    accumulate_arr(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
