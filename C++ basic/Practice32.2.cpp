//https://leetcode.com/problems/next-greater-element-ii/
//https://leetcode.com/problems/next-greater-element-i/
#include <iostream>
#include <vector>
#include <stack>
#include <map>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
	vector<int> cpnums(nums.size() * 2);
	for (int z = 0; z < nums.size(); z++)
		cpnums[z] =  nums[z];
	for (int z = 0; z < nums.size(); z++)
		cpnums[nums.size() + z] =  nums[z];
	vector<int> nge(cpnums.size(), -1);
	stack<int> st;
	for (int i = 0; i < cpnums.size(); i++)
	{
		while (!st.empty() && cpnums[st.top()] < cpnums[i]){
			nge[st.top()] = cpnums[i];
			st.pop();
		}
		st.push(i);
	}
	std::vector<int> res(nums.size());
	for (int i = 0; i < nums.size(); i++)
		res[i] = nge[i];
	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	std::vector<int> nums1(n);
	for (int i = 0; i < n; i++)
		cin >> nums1[i];
	std::vector<int> ans = nextGreaterElements(nums1);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";

}