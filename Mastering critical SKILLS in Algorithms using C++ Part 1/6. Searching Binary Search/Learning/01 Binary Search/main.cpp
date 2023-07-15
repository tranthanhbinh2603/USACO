#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> a {1,2,3,4};
    if (binary_search(a.begin(), a.end(),1))
        cout << "find!";
    else
        cout << "not find!";
}
