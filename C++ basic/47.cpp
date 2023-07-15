#include <iostream>
using namespace std;

int main()
{
	//Đầu tiên, nói lại về nhị phân:
	//0 - 0
	//1 - 1
	//2 - 1 0
	//3 - 11
	//4 - 100
	//5 - 101
	//6 - 110
	//7 - 111
	//Hay nói đúng hơn đây là phép dịch bit

	//Phép AND, OR, XOR (1 1 của or là 0 0 của xor)
	//NOT - 0 thành 1, 1 thành 0
	//Left - << 
	//Right - >>

	//Ví dụ left và right (Bit Shifting)
	//cout << 3 << 1;
	//3 << 1: 11 << 0 = 110
	//3 << 2: 1100
	//3 >> 1: 11 > 1
	//6 >> 1: 110 >> 1 >> 11

	cout << INT_MAX << endl;
	int a = 1 << 4; //1 << n = 2^n
	cout << a << endl; 
	a = (1 << 31) - 1; //Có cảnh báo
	cout << a << endl;
	a = (1LL << 31) - 1; //Không cảnh báo
	cout << a << endl;
	unsigned int b = (1LL << 32) - 1; 
	cout << b << endl;
	//unsign int

	//signed bit - ibit-sign
}