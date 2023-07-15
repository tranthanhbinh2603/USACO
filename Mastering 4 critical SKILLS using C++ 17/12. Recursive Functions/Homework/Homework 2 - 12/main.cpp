#include <iostream>

using namespace std;

bool is_palin(int arr[], int len, int cou = 0){
    if (cou >= len / 2) return true;
    else return is_palin(arr, len, cou + 1) && (arr[cou] == arr[len - cou - 1]);
}

int main()
{
    int a[] = {1, 3, 3, 2};
    cout << is_palin(a, 4);
}
