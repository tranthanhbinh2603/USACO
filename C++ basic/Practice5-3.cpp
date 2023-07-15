//https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1
#include <iostream>
using namespace std;

int count(int arr[], int n, int x) {
	int res = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] == x) res++;
	return res;
}

int main()
{
	int n, x;
	cin >> n >> x;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << count(arr, n, x);
}