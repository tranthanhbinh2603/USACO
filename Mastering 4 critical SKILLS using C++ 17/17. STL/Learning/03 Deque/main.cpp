#include <iostream>
#include <queue>

using namespace std;

int main()
{
    deque<int> a;
    a.push_back(1);
    a.push_front(2);
    a.push_back(3);
    a.push_front(4);

    for (int i : a)
        cout << i << " ";
}
