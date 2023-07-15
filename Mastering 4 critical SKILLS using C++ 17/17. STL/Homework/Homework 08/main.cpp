#include <iostream>
#include <stack>
#include <math.h>
#include <vector>
using namespace std;

//class Solution {
//public:
//    vector<int> asteroidCollision(vector<int>& asteroids) {
//        vector<int> a;
//    stack<int> s;
//    for (auto i: asteroids)
//    {
//        if (s.size() == 0){
//            s.push(i);
//        }
//        else if (i > 0 || (i < 0 && s.top() < 0))
//            s.push(i);
//        else
//        {
//            if (s.top() == abs(i))
//                s.pop();
//            else {
//                while (s.size() > 0 && s.top() < abs(i) && s.top() > 0)
//                    s.pop();
//                if (s.top() == abs(i))
//                    s.pop();
//                if (s.size() > 0 && s.top() < abs(i)) s.push(i);
//            }
//        }
//    }
//    stack<int> b;
//    while (s.size() > 0){
//        int k = s.top();
//        b.push(k);
//        s.pop();
//    }
//    while (b.size() > 0){
//        int k = b.top();
//        a.push_back(k);
//        b.pop();
//    }
//    return a;
//    }
//};

vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> s; // result array is used as a stack
        for(int a : asteroids) {
            if(a > 0) s.push_back(a); // positives will be pushed to stack
            else if(a < 0) { // negatives will be compared to the top of stack
                while(!s.empty() && s.back() > 0 && s.back() < abs(a)) s.pop_back();
                if(s.empty() || s.back() < 0) s.push_back(a); // top of stack is negative or does not exist => push the number to stack
                else if(s.back() == abs(a)) s.pop_back(); // if the negative current number is neutralized by the top of stack just pop the stack and ignore the current number            }
        }

    }
    return s;
}

void print(vector<int> v)
{
    for (auto i: v)
        cout << i << " ";
    cout << "\n";
}

int main()
{
    stack<int> s;
    int i {0};
    cin >> i;
    vector<int> v;
    for (int z = 0; z < i; z++){
        int s;
        cin >> s;
        v.push_back(s);
    }
    vector<int> v2 = asteroidCollision(v);
    print(v2);
}
