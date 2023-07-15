//Lập trình struct

#include <iostream>
using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

void initalsize(struct Rectangle *r, int leng, int breadth)
{
	r->length = leng;
	r->breadth = breadth;
}

int area(struct Rectangle r)
{
	return r.length * r.breadth;
}

int Perimeter(Rectangle r)
{
	int peri = 2 * (r.length + r.breadth);
	return peri;
}

int main()
{
	struct Rectangle r = {0,0};

	cin >> r.length >> r.breadth;

	int a = area(r);
	int peri = Perimeter(r);

	printf("Area=%d\nPerimeter=%d\n", a, peri);

	initalsize(&r, 10, 300000);
	a = area(r);
	peri = Perimeter(r);
	printf("Area=%d\nPerimeter=%d\n", a, peri);
}