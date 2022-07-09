#include <iostream>
using namespace std;

int x = 10;  // pretend this holds some important variable

void dbg() {
	cout << "x is " << x << endl;
}

int main() {
	dbg();  // outputs 10
	x = 5000;
	dbg();  // now outputs 5000
}
