#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int s = 1;
    while (s <= x){
        int i = 0;
        while (i < (x-s)){
            cout << " ";
            i++;
        }
        i = 0;
        while (i < s * 2 - 1){
            cout << "*";
            i++;
        }
        cout << "\n";
        s++;
    }
    while (s--){
        int i = 0;
        while (i < (x-s)){
            cout << " ";
            i++;
        }
        i = 0;
        while (i < s * 2 - 1){
            cout << "*";
            i++;
        }
        cout << "\n";

    }
}
