//https://leetcode.com/problems/employee-importance/
//Thuat na na nhu the nay. Xem them solution chinh thuc

#include <iostream>
#include <vector>
using namespace std;

class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};


class Solution {
public:
    void DFS_search(vector<Employee> employees, int id, int &sum, vector<bool> &isVisited){
        isVisited[id] = true;
        for (int node : employees[id].subordinates)
        if (!isVisited[node]){
            sum += employees[node].importance;
            DFS_search(employees, node, sum, isVisited);
        }
    }

    int getImportance(vector<Employee> employees, int id) {
        int sum = employees[id].importance;
        vector<bool> isVisited (employees.size());
        DFS_search(employees, id, sum, isVisited);
        return sum;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
