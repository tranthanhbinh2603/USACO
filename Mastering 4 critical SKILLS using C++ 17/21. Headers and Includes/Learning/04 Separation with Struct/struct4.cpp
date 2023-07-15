#include "struct4.h"
#include <iostream>
using namespace std;

str4* s3 = new str4(50000);

str4::str4(int n){
    s = n;
}
void str4::print(){
    cout << s << "\n";
}
