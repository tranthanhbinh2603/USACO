#include <iostream>
using namespace std;

/*void Fun(int A[])
{
	//cout << sizeof(A)/sizeof(int) << endl; //2
	// for (int i : A)
	// 	cout << i << " "; //Không thể được
}
*/

/*void Fun(int A[], int size)
{
	A[0] = 100;
	for (int i = 0; i < size; i++)
		cout << A[i] << "\n";
}*/

/*void Fun(int *A, int size)
{
	A[0] = 100;
	for (int i = 0; i < size; i++)
		cout << A[i] << "\n";
}*/

int * gen(int size)
{
	int* p;
	p = new int[size];
	for (int i = 0; i < size; i++)
		p[i] = i *100;
	return p;
}
int main()
{
	/*int A[] = {2, 4, 6, 8, 10};

	Fun(A, 5);
	// cout << sizeof(A)/sizeof(int) << endl; //5
	for (int i : A)
		cout << i << " ";*/
	//int * ptr;
	int size = 100000;
	int *ptr = gen(size);
	for (int i = 0; i < size; i++)
		cout << ptr[i] << endl;
}