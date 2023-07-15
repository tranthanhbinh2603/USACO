//https://leetcode.com/problems/rabbits-in-forest/
#include <iostream>
#include <vector>
using namespace std;

int numRabbits(vector<int>& answers) {
	const int maxarr = 1010;
	int hsh[maxarr];
	for (int i = 0; i < maxarr; i++){
		hsh[i] = 0;
	}
	int res = 0;
	for (int i = 0; i < answers.size(); i++){
		if (hsh[answers[i]] == 0) 
		{
			res += 1 + answers[i];   
			hsh[answers[i]]++;
			//cout << res << " " << answers[i] << " " << hsh[answers[i]] << "\n";
		}

		else if (hsh[answers[i]] == answers[i]) hsh[answers[i]] = 0;
		else hsh[answers[i]]++;
		//cout << answers[i]
	}
	if (hsh[0] != 0) return res + hsh[0] - 1;
	return res;
}

int main()
{
	int n;
	cin >> n;
	vector<int> a1;
	for (int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		a1.push_back(temp);
	}
	cout << numRabbits(a1);
}