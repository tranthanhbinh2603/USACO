#include <iostream>
using namespace std;

struct Retangle
{
	int length; //4 byte
	int breadth; //4 byte
} r1, r2, r3;

struct Retangle2
{
	int length; //4 byte
	int breadth; //4 byte
	char x; //4byte nhưng chỉ dùng 1 byte
};


struct Retangle r4; 
int main()
{
	struct Retangle r5 = {10, 5};
	//cout << sizeof(r5);

	struct Retangle2 rr1 = {100, 220, 'r'};
	//cout << sizeof(rr1) << "\n";

	cout << rr1.length << "\n";
}