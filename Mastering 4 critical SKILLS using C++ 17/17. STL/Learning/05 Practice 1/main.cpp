#include <iostream>
#include <queue>
using namespace std;

struct last_k_number_sum_stream{
    int k;

    last_k_number_sum_stream(int _k){
        k = _k;
    }

    int next(int n){
        queue<int> a;
        int i {0}; int cou {0};
        while (true){
            if (++i > k){
            a.pop();
            }
            a.push(++cou);
            if (n == cou){
                int res;
                while (a.size() > 0){
                    res += a.front();
                    a.pop();
                }
                return res;
                break;
            }
        }
    }
};

int main()
{
  last_k_number_sum_stream processer(4);

    int num;
    while (cin >> num){
        cout << processer.next(num) << endl;
    }
}
