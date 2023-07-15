//https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string a, b;
	cin >> a >> b;

	cout << a.size() << " " << b.size() << "\n" << a + b << "\n";

	char temp = a[0];
	a[0] = b[0];
	b[0] = temp;

	cout << a << " " << b;
}