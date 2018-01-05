//https://leetcode.com/problems/employee-importance/description/

//You are given a data structure of employee information, which includes the employee's unique id, his importance value and his direct subordinates' id.

//For example, employee 1 is the leader of employee 2, and employee 2 is the leader of employee 3. They have importance value 15, 10 and 5, respectively. Then employee 1 has a data structure like [1, 15, [2]], and employee 2 has [2, 10, [3]], and employee 3 has [3, 5, []]. Note that although employee 3 is also a subordinate of employee 1, the relationship is not direct.

//Now given the employee information of a company, and an employee id, you need to return the total importance value of this employee and all his subordinates.

#include <iostream>
#include <vector>
using namespace std;

// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        Employee* e=nullptr;
        for(int i=0;i<employees.size();i++)
            if(employees[i]->id==id){
                e=employees[i];
                break;
            }
        int sum=e->importance;
        for(int i=0;i<e->subordinates.size();i++)
            sum+=getImportance(employees,e->subordinates[i]);
        return sum;
    }
};

int main(){}
