#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> z {1,2,3,4,5};
    cout << upper_bound(z.begin(), z.end(), 100) - z.begin();
}
