#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
#include<iomanip>
using namespace std;

bool possible(vector<double> &positions, double msg_dist, double can_move_dist) {
	double last_position = positions[0] + can_move_dist;
	for (int i = 1; i < (int)positions.size(); i++) {
		double last_possible_msg_position = last_position + msg_dist;

		if (positions[i] - can_move_dist > last_possible_msg_position)
			return false;
		last_position = min(last_possible_msg_position, positions[i] + can_move_dist);
	}
	return true;
}

double min_time(vector<double> &positions, double msg_dist) {
	double start = 0.0, end = 1e9;

	while (end - start > 1e-9) {
	//for(int iter = 0; iter < 100; ++iter) {		// also works
		double mid = start + (end - start) / 2.0;
		if (possible(positions, msg_dist, mid))
			end = mid;
		else
			start = mid;
	}
	return start;
}

int main() {
    freopen("fie.in", "r", stdin);

	int cases, n;
	double msg_dist;
	cin >> cases;

	while (cases--) {
		cin >> msg_dist >> n;
		vector<double> positions(n);

		for (int i = 0; i < n; i++)
			cin >> positions[i];

		double time = min_time(positions, msg_dist);

		cout << fixed;
		cout << setprecision(3) << time << "\n";
	}
	return 0;
}

