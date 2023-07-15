#include <iostream>
#include "header.h"
using namespace std;

int call = 0;

int some_global = 0; //Bien global trong cpp

int sum(int n){

    call++;
    some_global++;
    return n * (n + 1) / 2;
}
