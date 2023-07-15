#include <iostream>
using namespace std;

/*Ví dụ 1*/
//int inc(int numa)
//int inc(int *numa)
int inc(int &numa) //Sử dụng alias
{
	//(*numa)++;
	numa++;
	//cout << "In func inc: " << *numa << "\n";
	cout << "In func inc: " << numa << "\n";
	return 0;
}

/*Ví dụ 2: */
//void swap(int numa, int numb)
void swap(int &numa, int &numb)
{
	int temp;
	temp = numa;
	numa = numb;
	numb = temp;
}

int main()
{
	/*int a = 10;
	cout << "Before call func inc: " << a << "\n";
	//inc(a);
	//inc(&a);
	inc(a);
	cout << "After call func inc: " << a << "\n";*/

	int a = 100, b = 200;
	swap(a, b);
	cout << a << " " << b;
}