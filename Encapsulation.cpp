#include <iostream>
using namespace std;
/* Name:Emmanuel Baraka
RegNo: BSCIT-05-0113/2024
*/
class Employee {
private:
string name;
int salary;

public:
//setter//
void setSalary(int sal) {
salary = sal;
}

void setName(string n) {
name = n;
}
//getter//

string getName() {
return name;
}

int getSalary() {
return salary;
}
};
//int function//
int main() {
Employee emp;
emp.setName("Emmanuel ");
emp.setSalary(4000);

cout << "Employee Name: " << emp.getName() << endl;
cout << "Employee Salary: " << emp.getSalary() << endl;
}
