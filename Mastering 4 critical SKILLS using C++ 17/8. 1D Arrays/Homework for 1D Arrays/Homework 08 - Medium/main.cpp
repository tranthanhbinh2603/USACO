#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int hsh[770 + 10] {0};
    for (int i = 0; i < n; i++){
        int a; cin >> a; hsh[a + 500]++;
    }
    int max = 0; int max_ind = -500;
    for (int i = -500; i <= 270; i++)
    if (hsh[i + 500] > max){
        max_ind = i;
        max = hsh[i+500];
    }
    cout << max_ind;
}
