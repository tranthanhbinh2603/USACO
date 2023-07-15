#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];


    int first = a[0], sec = a[1], third = a[2];
    if (first > sec){
        int temp = first;
        first = sec;
        sec = temp;
    }
    if (sec > third){
        int temp = third;
        third = sec;
        sec = temp;
    }
    if (first > sec){
        int temp = first;
        first = sec;
        sec = temp;
    }

    for (int i = 3; i < n; i++){
        if (a[i] < first){
            third = sec;
            sec = first;
            first = a[i];
        }
        else if (a[i] < sec){
            third = sec;
            sec = a[i];
        }
        else if (a[i] < third){
            third = a[i];
        }
    }
    cout << first << " " << sec << " " << third;
}
