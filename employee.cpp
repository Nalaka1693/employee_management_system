
class Employee;
class SalariedEmployee;
class HourlyPaiedEmployee;

string Employee::getName(void) const {
	return name;
}

int Employee::getAge(void) const {
	return age;
}

string Employee::getId(void) const {
	return employeeId;
}

float SalariedEmployee::getSalary(void) const {
	return monthlySalary;
}

float HourlyPaiedEmployee::getSalary(void) const {
	return workHours * hourlyRate;
}


