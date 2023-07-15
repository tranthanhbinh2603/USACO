#include <iostream>

using namespace std;

const int max1 = 100;

int main()
{
    int ind = 0;
    string name[max1];
    int age[max1];
    int salary[max1];
    char gender[max1];
    while (true)
    {
        int n;
        cout << "Enter your choice:\n1. Add new employee\n2. Print all employees\n3. Detele by age\n4. Update Salary by name\n";
        cin >> n;
        if (n == 1){
            char gender1;
            cout << "Enter name: "; cin >> name[ind];
            cout << "Enter age: "; cin >> age[ind];
            cout << "Enter salary: "; cin >> salary[ind];
            cout << "Enter gender (M/F): "; cin >> gender1;
            if ((gender1 == 'M') || (gender1 == 'F')) gender[ind] = gender1; else {
                cout << "Please try again!\n";
                age[ind] = -1;
            }
            ind++;
        }
        if (n == 2){
            for (int i = 0; i < ind; i++)
                if (age[i] != -1)
                    cout << name[i] << " " << age[i] << " " << salary[i] << " " << gender[i] << "\n";
        }
        if (n == 3){
            int s, e;
            cout << "Enter start and end age: ";
            cin >> s >> e;
            for (int i = 0; i < ind; i++)
                if ((s <= age[i]) && (age[i] <= e)){
                    age[i] = -1;
                }
        }
        if (n == 4){
            string s; int sala;
            cout << "Enter a name and salary: ";
            cin >> s >> sala;
            for (int i = 0; i < ind; i++)
                if (name[i] == s) salary[i] = sala;
        }
    }
}
