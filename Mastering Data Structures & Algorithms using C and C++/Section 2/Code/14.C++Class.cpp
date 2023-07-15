#include <iostream>
using namespace std;

class Rectangle
{
private:
	int length;
	int breath;

public:
	//Hàm tạo 
	Rectangle()
	{
		length = 0;
		breath = 0;
	}
	Rectangle(int l, int b)
	{
		length = l;
		breath = b;
	}
	//Hàm xử lí
	int area()
	{
		return length * breath;
	}
	int perimeter()
	{
		return 2*(length + breath);
	}
	//Hàm get-set
	int getLength()
	{
		return length;
	}
	void setLength(int a)
	{
		length = a;
	}
	int getBreath()
	{
		return breath;
	}
	void setBreath(int a)
	{
		breath = a;
	}
	//Hàm huỷ
	~Rectangle()
	{

	}

};

int main()
{
	Rectangle r(100,200);
	cout << r.area() << " " << r.perimeter() << "\n";
	cout << r.getBreath() << "\n";
	r.setBreath(300);
	cout << r.area() << " " << r.perimeter() << "\n";
	cout << r.getBreath() << "\n";
}