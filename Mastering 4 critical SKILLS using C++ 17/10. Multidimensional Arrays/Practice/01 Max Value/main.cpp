#include <iostream>

using namespace std;

int main()
{
    int x, y; cin >> x >> y; int a[x][y];
    for (int i = 0; i < x; i++)
        for (int z = 0; z < y; z++)
            cin >> a[i][z];
    int max_va, max_x, max_y; max_va = a[0][0];
    for (int i = 0; i < x; i++)
        for (int z = 0; z < y; z++)
            if (max_va <= a[i][z]){
                max_va = a[i][z];
                max_x = i;
                max_y = z;
            }
    cout << "Max value as pos " << max_x << " " << max_y << " with value = " << max_va;
}
