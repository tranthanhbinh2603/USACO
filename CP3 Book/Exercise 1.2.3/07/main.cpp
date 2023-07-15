#include <iostream>
#include <set>
#include <vector>
using namespace std;

void gen(string arr, string ans, int size1){
    cout << arr << " " << ans << "\n";
    bool isFind = true;
    if (ans.size() == size1){
        cout << ans << "\n";
        return;
    }
    for (int i = 0; i < arr.size(); i++){
        for (int z = 0; z < arr.size(); z++)
            if (arr[i] == ans[z]) isFind = false;
        if (isFind){
            ans.push_back(arr[i]);
            gen(arr, ans, size1);
        }
    }
}

int main()
{
    string arr = "abcdefghik";
    string ans;
    gen(arr, ans, arr.size());
}
