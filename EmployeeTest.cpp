/*Test driver class for class (TestAccount.cpp) */

#include <iostream>
#include "Employee.h"

using namespace std;

int main() {
	Employee newEmployee;
	newEmployee.getDetails();
	newEmployee.computeTaxRate();
	newEmployee.computeTaxAmount();
	newEmployee.computeNetSalary();
	newEmployee.displayDetails();

	return 0;
}
