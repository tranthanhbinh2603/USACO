#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle{
	int length;
	int breadth;
};

int main()
{
	/*int a = 10;
	//cout << a;

	int *p;
	p = &a; //Gán địa chỉ của a cho địa chỉ của p

	printf("Using pointer %d %d\n", p, &a);
*/

	/*int a[5] = {2, 3, 4, 5, 6};
	int  *p;
	p = a; //Bản thân mảng cũng là sự kết hợp của 3 loại pointer
	for (int i = 0; i < 5; i++){
		cout << p[i] << endl;
	}*/

/*	int *p;
	//p = (int*)malloc(5*sizeof(int));
	p = new int[5];

	p[0] = 10;
	p[1] = 15;
	p[2] = 20;

	//In ra từ trong heap
	for (int i = 0; i < 5; i++){
		cout << p[i] << endl;
	}

	//dynamic allocation
	//delete []p;
	//or free(p) in c
	//Cơ mà nó tự động xoá nên cũng chả cần nó đâu.*/

	int *p1;
	char *p2;
	float *p3;
	double *p4;
	struct Rectangle *p5;

	cout << sizeof(p1) <<" \n";
	cout << sizeof(p2) <<" \n";
	cout << sizeof(p3) <<" \n";
	cout << sizeof(p4) <<" \n";
	cout << sizeof(p5) <<" \n";
	//Mất cùng 1  bộ nhớ.
	
}