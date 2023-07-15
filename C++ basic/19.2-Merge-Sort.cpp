#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int h) //l với h như ở dưới. m - middle: Phần tử ở giữa
{
	int i, j, k = l;
	int n1 = m - l + 1; //Độ dài đoạn trái đến giữa
	int n2 = h - m; //Từ giữa đến cuối
	/*
		0...7: 8 phần tử

		m = 3
		n1 = 3 - 0 + 1 = 4
		n2 = 7 - 3 = 4
	*/
	//Mảng lưu các phần tử đã sắp xếp
	int *L = new int[n1];
	int *R = new int[n2];
	//Copy các phần tử và 2 mảng
	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	//Chỉ số là từ l (bên trái) + i (biến chạy)
	for (int i = 0; i < n2; i++)
		R[i] = arr[m + i + 1]; 
	i = j = 0;
	while (i < n1 && j < n2)
		arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
		//Hai con trỏ.
	//Còn 2 khả năng: Left chưa lấy hết hoặc right chưa lấy hết
	while (i < n1)
		arr[k++] = L[i++];
	while (j < n2)
		arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int h) //low: chỉ số nhỏ nhất, high: chỉ số lớn nhất
{
	/*4 bước thuật toán mergeSort:
	1. Tìm phần tử middle
	2. Đệ quy nửa trước của mảng
	3. Đệ quy nửa sau của mảng
	4. Trộn 2 mảng thành mảng kết quả*/
	if (l < h)
	{
		int m =  l + (h - l) / 2; //Phần tử ở giữa
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, h);
		merge(arr, l, m, h);
	}

}

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
	mergeSort(A, 0, n - 1);
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
}