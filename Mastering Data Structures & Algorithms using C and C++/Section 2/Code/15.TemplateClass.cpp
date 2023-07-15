#include <iostream>
using namespace std;

/*class Arithmetic
{
private:
	int a;
	int b;
public:
	Arithmetic(int a, int b)
	{
		this->a = a;
		this->b = b;
	}

	int add()
	{
		int c;
		c = a + b;
		return c;
	}
	int sub()
	{
		int c;
		c = a - b;
		return c;
	}
};*/

/*class Arithmetic
{
private:
	int a;
	int b;
public:
	Arithmetic(int a, int b);
	int add();
	int sub();

};
Arithmetic::Arithmetic(int a, int b)
{
	this->a = a;
	this->b = b;
}

int Arithmetic::add()
{
	int c;
	c = a + b;
	return c;
}
int Arithmetic::sub()
{
	int c;
	c = a - b;
	return c;
}*/

template <class T>
class Arithmetic
{
private:
	T a;
	T b;
public:
	Arithmetic(T a, T b);
	T add();
	T sub();

};
template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
	this->a = a;
	this->b = b;
}
template <class T>
T Arithmetic<T>::add()
{
	T c;
	c = a + b;
	return c;
}
template <class T>
T Arithmetic<T>::sub()
{
	T c;
	c = a - b;
	return c;
}

int main()
{
	Arithmetic<int> r(1, 100), r2(3,4);
	cout << r.add();

}

//Đổi 1 class về 1 class T.
//B1: Chuyển hết class về outside class
//B2: Thêm tiêu đề template <class T> ở trên khung xương và trên từng hàm
//B3: Trong hàm tạo, kiểu dữ liệu trả về đều là T.
//4: Đổi hết kiểu dữ liệu trả về trong các hàm là T.
//B5: Phần trước hàm ghi thêm <T> vào ở sau.