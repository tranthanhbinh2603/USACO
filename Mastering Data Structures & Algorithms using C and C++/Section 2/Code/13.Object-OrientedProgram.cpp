//Lập trình struct

#include <iostream>
using namespace std;

class Rectangle
{
//Các biến thành viên: Private
private:
	int length;
	int breadth;

//Các hàm: Public:
public:
	Rectangle(int leng, int bread) //Hàm tạo
	{
		length = leng;
		breadth = bread;
	}

	int area()
	{
		return length * breadth;
	}

	int Perimeter()
	{
		int peri = 2 * (length + breadth);
		return peri;
	}
};



int main()
{
	Rectangle r = Rectangle(0,0);

	int leng, bread;
	cin >> leng >> bread;

	r = {leng, bread};

	int a = r.area();
	int peri = r.Perimeter();

	printf("Area=%d\nPerimeter=%d\n", a, peri);
}