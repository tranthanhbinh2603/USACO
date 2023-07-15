#include <iostream>
#include <queue>

using namespace std;

void print_1(deque<int> a){
    deque<int>::iterator i = a.begin();
    while (i != a.end()){
        cout << *i << " ";
        i++;
    }
    cout << "\n";
}

void print_2(deque<int> a){
    deque<int>::reverse_iterator i = a.rbegin();
    while (i != a.rend()){
        cout << *i << " ";
        i++;
    }
    cout << "\n";
}

void print_3(deque<int> a){
    //Phai viet dai hon print_2
    deque<int>::iterator i = a.end() - 1;
    while (i != a.begin() - 1){
        cout << *i << " ";
        i--;
    }
    cout << "\n";
}

int main()
{
    deque<int> a {1,2,3,4,5};
    print_1(a);
    print_2(a);
    print_3(a);
}
