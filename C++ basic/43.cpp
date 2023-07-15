//https://www.spoj.com/problems/EKO/
#include <iostream>
#include <algorithm>
using namespace std;

const int maxN = 1000000;
long long trees[maxN];
long long m;
int n;

bool isWoodSufficient(int h)
{
	long long woods = 0;
	for (int i = 0; i < n; i++)
		if (trees[i] > h) woods += trees[i] - h;
	return woods >= m;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		cin >> trees[i];
	long long lo = 0; long long hi = 1e9; long long mid;
	while (hi - lo > 1)
	{
		mid = (lo + hi) / 2;
		if (isWoodSufficient(mid))
			lo = mid;
		else 
			hi = mid - 1;
	}
	if (isWoodSufficient(hi))
		cout << hi;
	else
		cout << lo;

}