#include <iostream>
#include <vector>
using namespace std;

const int ma = 1e6 + 10;
vector<int> pr (ma, 1);
void sieve(){
    pr[0] = pr[1] = 0;
    for (int i = 2; i <= ma; i+=2){
        pr[i] = 2;
    }
    for (int i = 3; i <= ma; i++){
        if (pr[i] == 1){
            pr[i] = i;
            for (int z = 2 * i; z <= ma; z+=i)
                pr[z] = i;
        }
    }
}

int main()
{
    sieve();
    int q; cin >> q;
    int prv {0};
    int cnt {0};
    while (q > 1){
        //cout << pr[q] << "*";
        if (prv == 0 && pr[q] != prv){
            cnt++;
            prv = pr[q];
        }
        else if (prv == pr[q]){
            cnt++;
        }
        else{
            cout << prv << "^" << cnt << "\n";
            cnt = 1;
            prv = pr[q];
        }
        q /= pr[q];
    }
    cout << prv << "^" << cnt << "\n";
}
