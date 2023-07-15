#include <iostream>
using namespace std;

//3 khái niệm: (Kth bit)
//Setting bit: 0 -> 1, 1 -> 1
//Clear bit: 1 -> 0, 0 -> 0
//Toggle bit: 1 -> 0, 0 -> 1

void printBinary(int num)
{
	for (int i = 10; i >= 0; --i)
		cout << ((num >> i) & 1);
	cout << "\n";
}

void checkSetBit(int a, int i)
{
	if (a & (1 << i) != 0)
		cout << "set bit\n";
	else 
		cout << "not set bit\n";
}

int main()
{
	//1001:
	//nth bit: Số 1 đầu tiên được gọi là MSB bit
	//0th bit: Số 1 thứ 2 được gọi là LSB Bit
	printBinary(8);
	int a = 8, i = 3; ///8: 1 1 1
	cout << (1 << i) << endl;
	checkSetBit(a, i);
	a = 9; //9: 1 0 0 0
	checkSetBit(a, i);
/*
	//bit set:
	printBinary(a | (1 << 1));
	printBinary(~a);
	printBinary(~(1 << 3));

	//bit set:
	printBinary(a | (1 << 1));
	//bit unset
	printBinary(a & (~(1 << i)));
	//toggle:
	printBinary(a ^ (1<<2));
	printBinary(a ^ (1<<3));

	//count:
	int ct = 0;
	for (int i = 31; i>=0; --i)
		if ((a & (1 << i)) != 0){
			ct++;
		}
	cout << ct << endl;
	cout << __builtin_popcount(a) << endl;
	cout << __builtin_popcountll((1LL << 35) - 1) << endl;*/

}