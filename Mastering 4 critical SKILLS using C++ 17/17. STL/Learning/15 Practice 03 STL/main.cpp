#include <iostream>
#include <stack>
using namespace std;

bool slove(const string &s){
    stack<char> a;
    for (auto i: s)
    {
        if (i == ')')
            if (a.size() <= 0) return false;
                else if (a.top() != '(') return false;
                    else a.pop();
        else if (i == '}')
            if (a.size() <= 0) return false;
                else if ((a.top() != '{')) return false;
                    else a.pop();
        else if (i == ']')
            if (a.size() <= 0) return false;
                else if ((a.top() != '[')) return false;
                    else a.pop();
        else a.push(i);
    }
    if (a.size() != 0) return false; else return true;
}

int main()
{
    cout << slove("()()()");
}
