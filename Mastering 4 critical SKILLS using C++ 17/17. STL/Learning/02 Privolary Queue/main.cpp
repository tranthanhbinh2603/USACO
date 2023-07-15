#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> a;
    a.push(1);
    a.push(5);
    a.push(3);
    a.push(19);

    cout << a.top() << "\n";
}
