//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/
#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, temp; long long int sum = 1;
	cin >> n;
	while (n--){
		cin >> temp;
		sum = sum * temp % 1000000007;
	}
	cout << sum;
}