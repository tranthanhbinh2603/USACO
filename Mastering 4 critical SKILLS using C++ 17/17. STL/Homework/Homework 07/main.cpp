#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    for (auto i: v)
        cout << i << " ";
    cout << "\n";
}

int main()
{
    string s;
    cin >> s;
    vector<int> v;
    int res {0};
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            v.push_back(0);
        else {
            if (v.size() == 1)
                if (v.back() == 0){
                    res += 1;
                    v.pop_back();
                }
                else{
                    res += v.back();
                    v.pop_back();
                }
            else{
                int te {0};
                if (v.back() == 0)
                    te = (v.back() + 1) * 2;
                else
                    te = v.back() * 2;
                v.pop_back();
                v.back() += te;
            }
        }
    }
    cout << res;
}
