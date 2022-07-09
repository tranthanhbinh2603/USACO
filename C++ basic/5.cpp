#include <iostream>
using namespace std;

//Nên khai báo mảng ở bên ngoài hàm main
const int n = 2e7;
int a[n];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	/*int a[10];
	a[10] = 10000;
	cout << a[10]; //Truy cập ngoài mảng được. Do vậy, cần cẩn thận!*/

	/*int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}

	cout << sum;*/

/*	int r,c;
	cin >> r >> c;
	int a[r][c];
	for (int i = 0; i < r; i++)
		for (int z = 0; z < c; z++)
			cin >> a[i][z];
	int sum = 0;
	for (int i = 0; i < r; i++)
		for (int z = 0; z < c; z++)
			sum += a[i][z];
	cout << sum;*/

	
	a[n - 1] = 7;
	cout << a[n - 1];

}