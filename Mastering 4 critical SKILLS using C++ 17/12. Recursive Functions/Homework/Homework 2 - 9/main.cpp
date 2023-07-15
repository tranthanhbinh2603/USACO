#include <iostream>

using namespace std;

//Them thuoc tinh start_position de no de dang hon
void left_max(int arr[], int len, int start_position = 0){
    if (start_position == len - 1) return; else left_max(arr, len, start_position + 1);
    arr[start_position] = max(arr[start_position], arr[start_position + 1]);
}

int main()
{
    int arr[] = {7, 7, 7, 7, 4, 2};
    left_max(arr, 6);
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
}
