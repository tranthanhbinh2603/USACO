#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
        for (int z = 0; z < v.size(); z++)
            if (v[z] < v[i]) swap(v[z], v[i]);
}
int main()
{
    vector<int> v{6,7,2,3,4,5,1};
    selection_sort(v);
    for (auto i : v){
        cout << i << " ";
    }
}
