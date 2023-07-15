#include <iostream>
using namespace std;

template<class T>
T add(T a, T b) {
	return a + b;
}

template<class T>
T multiply(T a, int factor) {
	return a * factor;
}

/*Boi vui string khong the nhan duoc - ta can 1 ham nhan dac biet khac.*/
template<>
string multiply(string str, int factor) {
	// we can't multiply strings
	string res = "";

	while (factor--)
		res += str;

	return res;
}

int main() {
	string s = "Magic";

	cout<<add(10, 4)<<"\n";			// 14
	cout<<add(s, s)<<"\n";			// MagicMagic

	cout<<multiply(10, 4)<<"\n";	// 40
	cout<<multiply(s, 4)<<"\n";		// MagicMagicMagicMagic

	return 0;
}
