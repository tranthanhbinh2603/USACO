#include <iostream>

using namespace std;

const int MAX = 1e6 + 10;

int main()
{
    int n, k;
    cin >> n >> k;
    bool alive[MAX] = {true};
    int start = 1;
    int count = 1;
    int count_alive = 0;
    int last_die = 0;

    for (int i = 1; i <= n; i++)
        alive[i] = true;

    while (true){
        if (start == last_die)
        {
            if (count_alive == 1)
            {
                break;
            }
            else
            {
                count_alive = 1;
            }
        }
        else;

        if (start > n){
            start = 1;
            continue;
        }

        if (alive[start] == true){
            if (count < k){
                start++;
                count_alive++;
                count++;
                continue;
            }
            else if (count == k){
                alive[start] = false;
                cout << start << " ";
                last_die = start;
                start++;
                count = 1;
            }
        }
        else
        {
            start++;
        }
    }

}
