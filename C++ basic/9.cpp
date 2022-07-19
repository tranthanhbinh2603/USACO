//Các mã lỗi thường gặp

#include <iostream>
using namespace std;
const int N = 1e8;
int A[N];

void func(int i)
{
	func(i+2);
	func(i+1);
	func(i);
}

int main()
{
	//AC: Đúng toàn bộ
	//CE: Compile Error: lỗi biên dịch
	//SIGSEGV/Segmentation Fault/Memory Limit Exceeded: Quá bộ nhớ. Chẳng hạn đoạn code này:
	for (int i = 0; i < N; i++)
		A[i] = i;
	cout << A[N - 1];

	//Segmentation Fault cũng có nghĩa là đi ngoài mảng
	for (int i = 0; i < N; i++)
		A[i] = i;
	cout << A[N - 1];

	//Other - Lỗi khác

	//Lỗi quá thời gian
	//Chỉ tính sau khi compile được file


	//Lỗi tràn buffer - stack

}