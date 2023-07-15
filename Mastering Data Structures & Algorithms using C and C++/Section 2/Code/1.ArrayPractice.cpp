#include <iostream>
using namespace std;

int main()
{
	//Có thể viết c++ và c cũng 1 họ cũng được
	/*int A[5];
	A[0] = 12;
	A[1] = 15;
	A[2] = 25;

	cout << sizeof(A) << "\n"; //4 * 5
	cout << A[1] << "\n";
	printf("%d\n", A[2]); //C*/


	// int A[] = {2, 3, 4, 5, 6, 14};
	// cout << sizeof(A) << "\n"; //4 * 5
	// cout << A[7] << "\n"; 

	/*int A[10] = {110}; //Toàn bộ dãy = 0, trừ A[0] = 110
	//cout << A[9];

	for (int i = 0; i < 10; i++)
		cout << A[i] << endl;
	for (int x : A)
		cout << x << endl;*/

	int n;
	cin >> n;
	int A[n]; //Not A[n] = {1, 2, 3}
	for (int x : A)
		cout << x << endl; //Tất cả giá trị là rác
	
}