//6 trick bit:
#include <iostream>
using namespace std;

void printBinary(int num)
{
	for (int i = 10; i >= 0; --i)
		cout << ((num >> i) & 1);
	cout << "\n";
}

int main()
{
	//Trick 1: Chan/le
	/*for (int i = 0; i <= 8; i++){
		cout << "\n" << i << " ";
		printBinary(i);
		//Check last bit
		if ((i & 1) == 0)
			cout << "===> Chan";
		else
			cout << "===> Le";
	}*/

	//Trick 2: Nhân đôi hoặc chia đôi
	/*Chạy 3 dòng code này và ta thấy chỉ cần dịch vào 1 chữ số là nhân đôi.
	printBinary(5);
	printBinary(10);
	printBinary(20);*/
	/*cout << 5 << " " << (5 << 1) << " " << (5 << 2) << "\n";
	cout << (32 >> 1);*/
	/*unsigned int n = 100;
	unsigned int z = 200;
	cout << ((n + z) >> 1);*/

	//Trick 3: Chữ hoa - chữ thường
	/*printBinary(int('Z'));
	printBinary(int('z'));
	//Xoá bỏ bit số 2 là ok*/
	/*cout << ('C' | (1 << 5)) << endl;
	//1 << 5: 32: 1 0 0 0 0 0
	//'C' có int là 67: 1 0 0 0 0 1 1
	//   1 0 0 0 0 0 
	// 1 0 0 0 0 1 1
	// 1 1 0 0 0 1 1 == 99
	//Vậy nó ra chữ A
	cout << ('c' & (~(1 << 5)));
	//~(1 << 5) là đảo ngược của (1 << 5): 11111011111
	//'c' có int là 99: 1 1 0 0 0 1 1
	// 1 0 1 1 1 1 1
	// 1 1 0 0 0 1 1
	// 1 0 0 0 0 1 1 = 67
	cout << ('c' | ' ');
	cout << ('c' & ~(' '));
	cout << ('c' & '_');*/

	//trick 4: Clear LSB
	/*int a = 59;
	int i = 4;
	int b = (a & (1 << (i + 2)));
	printBinary(b);*/

	//Trick 5: Clear MSB

	//trick 6: Power of 2:
	int check = 63;
	cout << (check & (check - 1));
	if (check & (check - 1))
		cout << "not power of 2";
	else
		cout << "power of 2";
}