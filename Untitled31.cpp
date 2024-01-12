#include<iostream>
using namespace std;

class Employee {
    private:
        string name;
        float salary;
        string designation;

    public:
        void setName(string n) {
            name = n;
        }

        void setSalary(float s) {
            salary = s;
        }

        void setDesignation(string d) {
            designation = d;
        }

        string getName() {
            return name;
        }

        double getSalary() {
            return salary;
        }

        string getDesignation() {
            return designation;
        }
};

int main() {
    Employee emp;
    emp.setName("jaimin savani");
    emp.setSalary(50000);
    emp.setDesignation("flutter devloper");
    cout << "Employee Name: " << emp.getName() << endl;
    cout << "Employee Salary: " << emp.getSalary() << endl;
    cout << "Employee Designation: " << emp.getDesignation() << endl;
    return 0;
}
