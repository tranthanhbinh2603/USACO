#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    //Them 2 dong nay.
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("speed.in", "r", stdin);
	freopen("speed.out", "w", stdout);
	int M, N;
	cin >> M >> N;
	int ans = 0;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		ans = (ans + x) % MOD;
		if (M == 1) {
			cout << ans << "\n"; //Bat buoc su dung \n thay cho endl
		}
	}
	if (M == 0) {
		cout << ans << "\n";
	}
}
