#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0; 
	while (true){
		cin >> n;
		if (n == 42) break;
		cout << n << "\n"; 
	}
}