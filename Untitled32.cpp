#include <iostream>
using namespace std;
class Employee {
private:
    string name;
    float salary;
 
public:
    Employee(const string& n, float s) : name(n), salary(s) {}

    double getSalary() const {
        return salary;
    }
    Employee operator+(const Employee& other) const {
    return
	 Employee(name + " and " + other.name, salary + other.salary);
    }

    void display() const {
        cout << "Employee: " << name << ", Salary: "<< salary << std::endl;
    }
};

int main() {
    Employee employee1("jay", 50000.0);
    Employee employee2("jaimin", 60000.0);

    Employee totalSalary = employee1 + employee2;

    std::cout << "Total Salary for ";
    employee1.display();
    cout << " and ";
    employee2.display();
    cout << " is ";
    totalSalary.display();

    return 0;
}

