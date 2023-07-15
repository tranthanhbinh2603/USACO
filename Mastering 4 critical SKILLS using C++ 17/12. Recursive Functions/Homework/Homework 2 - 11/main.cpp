#include <iostream>

using namespace std;

int prefix_sum(int arr[], int tar, int cou = 1){
    if (tar == cou) return arr[cou - 1];
    else return arr[cou - 1] + prefix_sum(arr, tar, cou + 1);
}

int main()
{
    int a[] = {1, 3, 4, 6, 7};
    cout << prefix_sum(a, 3);
}
