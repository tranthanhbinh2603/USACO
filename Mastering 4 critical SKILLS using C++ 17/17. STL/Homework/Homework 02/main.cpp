#include <iostream>
#include <queue>
using namespace std;

struct OurStack{
    queue<int> a;

    void push(int n){
        int s = a.size();
        a.push(n);
        while (s--)
            a.push(a.front()), a.pop();
    }

    int top(){
       return a.front();
    }

    void pop(){
        if (a.size() > 0){
            a.pop();
        }
    }

    bool empty(){
        return a.empty();
    }
};

int main()
{
    OurStack a;
    a.push(1);
    a.push(2);
    a.push(3);

    while (!a.empty())
        cout << a.top() << " ", a.pop();
}
