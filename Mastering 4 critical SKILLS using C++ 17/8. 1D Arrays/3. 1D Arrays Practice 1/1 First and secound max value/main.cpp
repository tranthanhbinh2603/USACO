/*Can than voi ca so duong va am*/
#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max_val = a[0], sec_max_val = a[1];
    if (max_val < sec_max_val) {
        int temp = max_val;
        max_val = sec_max_val;
        sec_max_val = temp;
    }
    for (int i = 2; i < n; i++){
        if (max_val < a[i]) {
            sec_max_val = max_val;
            max_val = a[i];
        }
        else if (sec_max_val < a[i]) sec_max_val = a[i];
    }
    cout << max_val << " " << sec_max_val;
}
