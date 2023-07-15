#include <iostream>
#include <stack>
using namespace std;

string slove(string s){
    stack<char> s1;
    for (auto i: s)
        if (s1.size() == 0 || i != s1.top()){
            s1.push(i);
        }
        else s1.pop();
    string res;
    while (s1.size() > 0)
       res = s1.top() + res, s1.pop();
    return res;
}

int main()
{
    cout << slove("azxxzy");
}
