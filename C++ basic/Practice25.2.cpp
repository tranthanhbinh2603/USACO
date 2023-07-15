/*Given N stringsand Q queries.
In each query yöu are given a string
print frequency of that string
N <= 10^6
|S| <= 100
Q <= 10^6*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unordered_map<string, int> m;
	int N; 
	cin >> N;
	while (N--){
		string s;
		cin >> s;
		m[s]++;
	}
	int Q;
	cin >> Q;
	while (Q--){
		string s;
		cin >> s;
		cout << m[s] << "\n";
	}
}