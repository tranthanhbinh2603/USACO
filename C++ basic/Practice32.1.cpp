//https://leetcode.com/problems/next-greater-element-i/
#include <iostream>
#include <vector>
#include <stack>
#include <map>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
	 vector<int> res(nums1.size()); 
	vector<int> nge(nums2.size(), -1);
	map<int, int> cpnge;
	stack<int> st;
	for (int i = 0; i < nums2.size(); i++)
	{
		while (!st.empty() && nums2[st.top()] < nums2[i]){
			nge[st.top()] = nums2[i];
			st.pop();
		}
		st.push(i);
	}
	for (int i = 0; i < nums2.size(); i++)
		cpnge[nums2[i]] = nge[i];
	for (int i = 0; i < nums1.size(); i++)
		res[i] = cpnge[nums1[i]];
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
	int m;
	cin >> m;
	std::vector<int> nums2(n);
	for (int i = 0; i < m; i++)
		cin >> nums2[i];

	std::vector<int> ans = nextGreaterElement(nums1, nums2);
	cout << "\n";
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";

}