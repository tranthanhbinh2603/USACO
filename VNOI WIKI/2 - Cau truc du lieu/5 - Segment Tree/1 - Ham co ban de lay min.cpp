#include <iostream>
using namespace std;

int a[1000];

int dac(int l, int r){
    if (l == r)
        return a[l];
    else 
        return min(dac(l, (l + r) / 2), dac((l + r) / 2 + 1, r));

}

int main(){

}