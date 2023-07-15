#include <iostream>

using namespace std;

int main()
{
    int *arr = new int[20];
    for (int i = 0; i < 20; i++)
        arr[i] = i+1;
    for (int i = 0; i < 20; i++)
        cout << &arr[i] << " ";
    //to delete point
    delete arr;
}
