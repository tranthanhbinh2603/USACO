#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t, n, sum;
	cin >> t;
	while (t--){
		cin >> n; sum = 0;
		while (n != 0){
			sum += n % 10;
			n = (n - (n % 10)) / 10;
		}
		cout << sum << "\n";
	}
}