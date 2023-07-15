#include <iostream>
using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

int main()
{
	/*//Có thể bỏ từ struct 
	Rectangle r = {4, 100};
	cout << r.length << "\n" << r.breadth << "\n";

	Rectangle *p = &r;
	cout << p->length << "\n" << p->breadth << "\n";*/

	/*//Cách để khai báo 1 con trỏ hoàn toàn mới kiểu struct
	Rectangle *r = (struct Rectangle *)malloc(sizeof(struct Rectangle)); //8 byte
	//1 cách khác: Rectangle *r = new Rectangle;

	r->length = 100;
	r->breadth = 2000;

	cout << r->length << "\n" << r->breadth << "\n";
	cout << sizeof(r);*/
}