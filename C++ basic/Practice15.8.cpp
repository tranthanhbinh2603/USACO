//https://leetcode.com/problems/single-number/
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
	const long int maxarr = 60000;
	int hsh[maxarr];
	for (int i = 0; i < nums.size(); i++)
		hsh[nums[i] + 30000]++;
	for (int i = 0; i < nums.size(); i++)
		if (hsh[nums[i] + 30000] == 1) return nums[i];
	return 99999;
}

int main()
{
	int n, temp;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++){
		cin >> temp;
		v.push_back(temp);
	}
	cout << singleNumber(v);
}