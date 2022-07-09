#include <iostream>
using namespace std;

int x = 10;

void dbg() {
	cerr << "x is " << x << endl; //cout -> cerr
}

int main() {
	dbg();
	x = 5000;
	dbg();
}
