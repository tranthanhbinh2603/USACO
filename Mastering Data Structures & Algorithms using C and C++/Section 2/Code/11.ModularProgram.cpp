//Lập trình theo mô-đun - Chia vấn đề lớn ra thành các vấn đề nhỏ hơn

#include <iostream>
using namespace std;

int area(int length, int breadth)
{
	return length * breadth;
}

int Perimeter(int length, int breadth)
{
	int peri = 2 * (length + breadth);
	return peri;
}

int main()
{
	int length = 0, breadth = 0;
	cin >> length >> breadth;

	int a = area(length, breadth);
	int peri = Perimeter(length, breadth);

	printf("Area=%d\nPerimeter=%d\n", a, peri);
}