//https://leetcode.com/problems/contains-duplicate/
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
	unordered_map<int, int> umap;
    for (int i = 0; i < nums.size(); i++)
	    umap[nums[i]]++;
    for (int i = 0; i < nums.size(); i++)
        if (umap[nums[i]] > 1)
            return true;
    return false;       
}

int main()
{
	int n; 
	cin >> n;
	vector<int> a; int temp;
	for (int i = 0; i < n; i++){
		cin >> temp;
		a.push_back(temp);
	}
	cout << containsDuplicate(a);
}