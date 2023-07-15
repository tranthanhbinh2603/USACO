#include <iostream>

using namespace std;

/*Lam nguoc lai bang*/
void print_triangle(int n, int ind = 1){
    if (ind == n) return;

    for (int i = 0; i < ind; i++)
        cout << "*";
    cout << "\n";

    return print_triangle(n, ind+1);
}

int main()
{
    print_triangle(100);
}
