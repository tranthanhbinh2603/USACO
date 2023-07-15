//https://leetcode.com/problems/subsets/
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> v;

void generate(vector<int> &subsets, int i, vector<int> &nums)
{
	if (i == nums.size()){
		v.push_back(subsets);
		return;
	}

	//i-th element not in subsets
	generate(subsets, i+1, nums);

	//i-th element in subsets
	subsets.push_back(nums[i]);
	generate(subsets, i+1, nums);
	subsets.pop_back();
}

int main()
{
	vector<int> subsets;
	int i = 0;
	vector<int> nums = {1, 2, 3};
	generate(subsets, i, nums);
	for (auto i:v)
	{
		for (auto z:i)
			cout << z << " ";
		cout << "\n";
	}
}