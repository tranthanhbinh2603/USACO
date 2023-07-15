#include <iostream>

using namespace std;

void pr(int a[], int si){
    for (int i = 0; i < si; i++)
        cout << a[i] << " ";
    cout << "\n";
}

//Iterating over array
void pr2(int a[]){
    int* ptr = a;
    while (ptr != a + 10)
        cout << *ptr++ << " ";
    cout << "\n";
}

//Iterating over char array
void pr3(char s[]){
    char * ptr = s;
    while (*ptr != '\0') //Ki tu het chuoi
        cout << *ptr++;
    cout << "\n";
}

int main()
{
    int arr[4] {1,2,3,4};
    cout << arr << " "; //Dia chi phan tu dau tien

    int *ptr = arr;
    cout << ptr << "\n";

    ptr[0] = 10;
    ptr[1] = 20;
    pr(arr, 4);

    //Offset Notation & supcript
    //cout << *(ptr+1) << " " << arr[1] << " " << *(arr+1)<< "\n";
    //cout << *ptr + 5; //Be careful - BIT
    //pr(arr, 4);

    //Move pointer
    cout << *ptr << "\n";
    ++ptr;
    cout << *ptr << "\n";

    //Pointers Arithmetic
    cout << *ptr++ << "\n";
    cout << *ptr << "\n";
    cout << *--ptr << "\n";
    cout << *ptr << "\n";

    //Get position in pointer
    cout << ptr - arr << "\n";
    ptr += 2;
    cout << ptr - arr << "\n";
    ptr = arr;
    cout << ptr - arr << "\n";

    pr2(arr);

    pr3("Hello");

    //Comparing Pointers
    int n1 = 10;
    int n2 = 10;
    int *pn1 = &n1;
    int *pn2 = &n2;

    cout << (pn1 == pn2) << "\n"; //Be careful
    cout << (*pn1 == *pn2) << "\n";
}
