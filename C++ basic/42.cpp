//Nth Root of a Number using Binary Search 
//Ý nghĩa: Tạo độ chính xác tuyệt đối cho phép sqrt

#include <iostream>
#include <iomanip>
using namespace std;

double nth_root(int number, int n)
{
	double begin = 1;
	double end = number;
	double eps = 1e-15; //Sai số.

	double mid = 0;
	while ((end - begin) > eps)
	{
		mid = (begin + end) / 2.0; 
		double temp = 1;
		for (int i = 0; i < n; i++)
			temp *= mid;
		if (temp > number) //Số ở giữa mũ lên lớn hơn số cần tìm
			end = mid;
		else //Số ở giữa mũ lên nhỏ hơn số cần tìm
			begin = mid;
	}
	return begin;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cout << setprecision(15) <<nth_root(2, 2);
}