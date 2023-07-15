#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	//Ghi dữ liệu - read data
	int n;
	cin >> n;
	int A[n];
	for (int i = 0; i < n; i++)
		cin >> A[i];

	//Selection sort
	for (int i = 0; i < n; i++)
	{
		int midIndex = i; int maxIndex = i; //Phần tử đã được sắp xếp từ đầu mảng đến i - 1 -> Phần tử cần tìm phần tử sẽ được sắp xếp đến i
		for (int i = maxIndex; i < n; i++) //Từ phần tử chưa được sắp xếp đầu tiên đến cuối mảng
			if (A[i] < A[maxIndex]) maxIndex = i; //Thay thế maxIndex
		swap(A[midIndex], A[maxIndex]); //Swap 2 phần tử, midIndex (vị trí chưa được sắp xếp đầu tiên) và maxIndex (vị trí có phần tử lớn nhất hiện tại)
	}
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
}