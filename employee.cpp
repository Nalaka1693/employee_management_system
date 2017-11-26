#include "employee.h"
#include <string>

class Employee;
class SalariedEmployee;
class HourlyPaiedEmployee;

// Employee
string Employee::getName(void) const {
	return name;
}

int Employee::getAge(void) const {
	return age;
}

string Employee::getId(void) const {
	return employeeId;
}

// Salaried Employee
float SalariedEmployee::getSalary(void) const {
	return monthlySalary;
}

void SalariedEmployee::setSalary(float s) const {
	monthlySalary = s;
}

// Hourly Paied Employee
float HourlyPaiedEmployee::getSalary(void) const {
	return workHours * hourlyRate;
}

void setHours(float h) const {
	workHours = h;
}
		
void setHourlyRate(float r) const {
	hourlyRate = r;
}


