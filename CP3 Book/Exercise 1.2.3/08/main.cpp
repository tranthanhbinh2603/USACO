#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < (1 << 20); i++){
        int idx = 1, cpi = i;
        while (cpi > 0){
            if (cpi & 1 == 1) cout << idx << "  ";
            idx++;
            cpi >>= 1;
        }
        cout << "\n";
    }

}
