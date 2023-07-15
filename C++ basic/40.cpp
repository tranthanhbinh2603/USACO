//Dạy người ta dạy cách code, mình thì dùng thư viện
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8};
	cout << *lower_bound(a.begin(), a.end(), 5) << "\n";
	cout << *upper_bound(a.begin(), a.end(), 5) << "\n";
	cout << binary_search(a.begin(), a.end(), 5)<< "\n";
	//Get index:
	auto itr = lower_bound(a.begin(), a.end(), 5);
	cout << distance(a.begin(), itr) << "\n";

	//Bài tập
	//https://www.hackerearth.com/.../algorithm/charsi-in-love/
	https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/problem-1-103/
	https://www.hackerearth.com/.../algorithm/foo-and-exams-4/
}