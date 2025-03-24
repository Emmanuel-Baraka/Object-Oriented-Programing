#include
using namespace std;
//NAME : EMMANUEL BARAKA
//REG NO : BSCIT-05-0113/2024

int main() {
double salary;
int serviceYears;
double Bonus;

cout << "Enter your salary: " << endl;
cin >> salary;
cout << "Enter years of service: " << endl;
cin >> serviceYears;

if (serviceYears > 10) {
Bonus = salary * 0.12;
}
else if (serviceYears >= 6 && serviceYears <= 10) {
Bonus = salary * 0.1;
}
else {
Bonus = salary * 0.08;
}

cout << "The net bonus amount is: " << Bonus << endl;

return 0;
}
