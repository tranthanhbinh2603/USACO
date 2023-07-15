#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    //complete the function
    int temp = 0;
    int copyx = x;
    do
    {
        temp = (temp * 10) + (x % 10);
        x = (x - x % 10) / 10;
    }
    while (x > 0);
    cout << temp << endl;
    if (temp == copyx) return true;
    return false;
}

int main() {
    int n;
    cin >>n;

    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}
