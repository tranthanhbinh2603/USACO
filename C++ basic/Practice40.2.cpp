//https://codeforces.com/problemset/problem/474/B
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int maxN = 1e5 + 10; 
const int maxM = 1e5 + 10;
vector <long int> pfN(maxN);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int temp; cin >> temp;
		pfN[i] = pfN[i - 1] + temp;
	}
	sort(pfN.begin(), pfN.end());
	int m; cin >> m;
	while (m--){
		long int temp = 0; cin >> temp;
		vector<long int>::iterator it = lower_bound(pfN.begin(), pfN.end(), temp);
		cout << (it - pfN.begin()) - (maxN - n) + 1<< "\n";
	}
}