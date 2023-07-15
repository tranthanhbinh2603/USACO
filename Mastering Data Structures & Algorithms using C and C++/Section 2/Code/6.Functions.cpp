#include<iostream>
using namespace std;

int sum1(int numa, int numb)
{
	int c;
	c = numa + numb;
	return c;
}

int main()
{
	int a = 10, b = 5, sum;
	sum = sum1(a, b);
	cout << sum << endl;
}