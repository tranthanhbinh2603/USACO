#include <iostream>

using namespace std;

int main()
{
    //1; 0001
    //2: 0010
    //3: 0011
    //4: 0100
    //5: 0101
    //6" 0110

    //Last bit is 0 -> Chan
    //De check la 0 hay 1 can & 1:
    // 0001
    //&0001 -> 1
    // 0100
    //&0001 -> 0
    int n; cin >> n;
    if (n & 1)
        cout << n << " la so le";
    else
        cout << n << " la so chan\";
}
