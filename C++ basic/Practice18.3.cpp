//https://www.hackerrank.com/challenges/recursive-digit-sum/problem
#include <iostream>
using namespace std;

long long int findSuperDigit(long long int n)
{
	if (n < 10) return n;
	else{
		long long int tempn = n; long long int res = 0;
		while (tempn > 0){
			res += tempn % 10;
			tempn = (tempn - (tempn % 10)) / 10;
		}
		return findSuperDigit(res);
	}

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string n;
	int k;
	cin >> n >> k;
	long long int sum = 0;
	for (int z = 0; z < n.size(); z++)
			sum += n[z] - '0';
	sum *= k;
	cout << findSuperDigit(sum) << "\n";
}