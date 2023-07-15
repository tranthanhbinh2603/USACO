#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void print_queue(queue<int>a){
    while (a.size() != 0){
        cout << a.front() << " ";
        a.pop();
    }
    cout << "\n";
}
void reverse_queue(queue<int>&q){
    stack<int> res;
    while (q.size() != 0){
        res.push(q.front());
        q.pop();
    }
    while (res.size() != 0){
        cout << res.top() << " ";
        res.pop();
    }
}

int main()
{
    queue<int> a; a.push(1); a.push(2); a.push(3);
    print_queue(a);
    reverse_queue(a);
}
