#include <iostream>
using namespace std;

struct Rectangle
{
	int length;
	int breath;
};

void Fun1(struct Rectangle r)
{
	r.length = 1000;
	cout << r.length << " " << r.breath << "\n";
}

void Fun2(struct Rectangle *r)
{
	r->length = 10;
	cout << r->length << " " << r->breath << "\n";
}

struct Rectangle* Fun3()
{
	struct Rectangle* rec1 = new Rectangle;
	rec1->length = 10000;
	rec1->breath = 20;
	return rec1;
}

int main()
{
	//struct Rectangle rec = {1,100};
	//Fun1(rec);
	//Fun2(&rec);
	struct Rectangle* rec = Fun3();
	cout << rec->length << " " << rec->breath << "\n";
}