#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> a;
    a.push(1); a.push(2);
    cout << a.front() << "\n";
    while (a.size() > 0){
        cout << a.front() << " ";
        a.pop();
    }

    queue<string> a1;
    a1.push("Jack");
    cout << a1.front();
}
