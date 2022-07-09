#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int z = 1; z <= 1; z++) cout << "*";
		for (int z = n - 1; z >= 1; z--) cout << "#";
	}
}