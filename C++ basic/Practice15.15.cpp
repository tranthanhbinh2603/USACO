//https://codeforces.com/contest/1426/problem/D
#include <iostream>
#include <set>
#include <iterator>
using namespace std;

const int maxN = 2 * 1e5 + 10;
int pf[maxN], origi[maxN];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	set <long long> s;
	long long sum = 0;
	s.insert(sum);
	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		long long x;
		cin >> x;
		sum += x;
		if (s.find(sum) != s.end()){
			ans++;
			s.clear();
			s.insert(0);
			sum = x;
		}
        s.insert(sum);
	}
	cout << ans;
}