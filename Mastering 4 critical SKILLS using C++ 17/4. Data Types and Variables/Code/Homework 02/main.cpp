#include <iostream>

using namespace std;

int main()
{
    string name1; int id1; double math_grade1;
    string name2; int id2; double math_grade2;
    cout << "What is student 1 name: ";
    cin >> name1;
    cout << "His id: ";
    cin >> id1;
    cout << "His math exam grade: ";
    cin >> math_grade1;
    cout << "What is student 2 name: ";
    cin >> name2;
    cout << "His id: ";
    cin >> id2;
    cout << "His math exam grade: ";
    cin >> math_grade2;

    cout << "Students grades in math\n";
    cout << name1 << " (with id " << id1 << ") got grade " << math_grade1 << "\n";
    cout << name2 << " (with id " << id2 << ") got grade " << math_grade2 << "\n";
    cout << "Average grade is " << (math_grade1 + math_grade2) / 2;
}
