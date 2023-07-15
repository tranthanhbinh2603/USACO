#include <iostream>
#include <vector>
using namespace std;

//Different from *x and &x
void do_math(int *x)
{
    //int *k = &x //Na na the nay
    //=> Can check k xem co null khong
    if (x == NULL)
        return;
    *x += 1;
    *x *= 2;
    *x = *x * 2;
}

void do_math(int &x)
{
    //int k = &x //Na na the nay
    x += 1;
    x *= 2;
    x = x * 2;

}

//print vector pointer
void print(vector<int> *ptr){
    for (auto i : *ptr){
        cout << i << " ";
    }
    cout << "\n";
}

void hello(int &x) {
}

//return point
int* max(int *p1, int *p2) {
	if (p1 == nullptr)
		return p2;

	if (p2 == nullptr)
		return p1;

	if (*p1 > *p2)
		return p1;
	return p2;
}

//Reference vs Pointer
void fun1(int &x) {}
void fun2(const int &x) {}
void fun3(int *x) {}


int main()
{
    int x = 20;

    //Different from *x and &x
    do_math(x);
    cout << x << "\n";

    int* x2 = &x;
    do_math(x2);
    cout << x << "\n";

    do_math(&x);
    cout << x << "\n";

    //print vector
    vector<int> a {1,2,3,4};
    print(&a);

    int x1 = 1;
	int *p = &x1;
	int &y1 = x1;

	// int& needs a variable on the right side
	int &y2 = *p;
	hello(x1); hello(*p); hello(y1);

    //Reference vs Pointer
    int *ptr = &x;

    fun1(x);
	//fun1(ptr);
	fun1(*ptr);
	//fun1(10);

	fun2(x);
	//fun2(ptr);
	fun2(*ptr);
	fun2(10);

	//fun3(x);
	fun3(&x);
	fun3(ptr);
	//fun3(10);
}
