#include <iostream>
#include <stack>
using namespace std;

int reverse_num(int num){
    stack<int> n;
    while (num != 0){
        n.push(num % 10);
        num /= 10;
    }
    int res; int ten = 1;
    while (n.size() > 0)
        res = res + n.top() * ten, ten *= 10, n.pop();
    return res;
}

int main()
{
    cout << reverse_num(123);
}
