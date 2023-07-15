#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--){
        int a;
        cin >> a; a++;
        int sum = 0;
        while (a--) sum += a;
        cout << sum << "\n";
    }
}
