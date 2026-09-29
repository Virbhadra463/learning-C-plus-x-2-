#include <bits/stdc++.h>
using namespace std;
// The third specifier, protected, is similar to private, but it can also be accessed in the inherited class:

class Employee {
protected:
int salary
};

class Programmer : public Employee{
public:
int bonus:
void setsalary(int s){
    salary = s;
}
int getSalary(){
    return salary;
}
};
int main() {

  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n"

    return 0;
}