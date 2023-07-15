#include <iostream>
using namespace std;

int slove(int n, int k){
    if (n == 1)
        return 1;
    return (slove(n - 1, k) + k - 1) % n + 1;

}

int main(){
    cout << slove(5, 3);
}
