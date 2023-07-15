#include <iostream>

using namespace std;

double add(double a, double b){
    return a + b;
}

double sub(double a, double b){
    return a - b;
}

double mul(double a, double b){
    return a * b;
}

double div(double a, double b){
    if (b != 0) return a / b;
        else return -1;
}

bool exit(){
    return false;
}

void read(double &x, double &y){
    cout << "Input 2 numbers: ";
    cin >> x >> y;
}

int menu()
{
    int choice;
    cout << "Please choice the option: (1)Add (2)Sub (3)Mul (4)Div (5)Exit\n";
    cin >> choice;
    return choice;
}

int main()
{
    bool isOn = true;
    while (isOn){
        int ch = menu();
        if (ch < 1 || ch > 5) {
            cout << "Please try again!\n";
            continue;
        }
        else {
            double a, b;
            if (ch != 5) read(a, b);
            if (ch == 1)
                cout << add(a, b);
            else if (ch == 2)
                cout << sub(a,b);
            else if (ch == 3)
                cout << mul(a, b);
            else if (ch == 4)
                cout << div(a, b);
            else if (ch == 5)
                isOn = exit();
            cout << "\n";
        }
    }
}
