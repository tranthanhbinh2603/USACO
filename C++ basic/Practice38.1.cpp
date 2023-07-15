//https://leetcode.com/problems/k-th-symbol-in-grammar/
#include <iostream>
#include <math.h>
using namespace std;

int kthGrammar(int n, int k) {
	if (n == 1) return 0;
	int temp = k - pow(2, n-2);
	if (temp <= 0) return kthGrammar(n - 1, k);
		else return !kthGrammar(n - 1, temp);
}

int main()
{
	cout << kthGrammar(3,4);
}