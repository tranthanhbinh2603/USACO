#include <iostream>

using namespace std;

int suffix_sum(int arr[], int len, int tar, int cou = 1){
    if (cou == tar) return arr[len - 1];
    else return arr[len - 1] + suffix_sum(arr, len - 1, tar, cou + 1);
}

int main()
{
    int a[] = {1, 3, 4, 6, 7};
    cout << suffix_sum(a, 5, 3);
}
