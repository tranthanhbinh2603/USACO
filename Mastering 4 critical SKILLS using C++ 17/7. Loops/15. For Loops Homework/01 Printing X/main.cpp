#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= x / 2; i++){
        for (int j = 1; j <= x - i + 1; j++)
            if (j == i || j == x - i + 1) cout << "*"; else cout << " ";
        cout << "\n";
    }
    for (int i = 1; i <= x / 2 + 1; i++)
        if (i == x / 2 + 1) cout << "*\n"; else cout << " ";

    for (int i = x / 2; i >= 1; i--){
        for (int j = 1; j <= x - i + 1; j++)
            if (j == i || j == x - i + 1) cout << "*"; else cout << " ";
        cout << "\n";
    }

}
