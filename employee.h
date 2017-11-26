#include <iostream>
#include <string>

#ifndef EMPLYEE_H
#define EMPLYEE_H

class Employee {
	private:
		string name;
		int age;
		string employeeId;
	public:
		string getName(void) const;
		int getAge(void) const;
		string getId(void) const;
};

class SalariedEmployee : public Employee {
	private:
		float monthlySalary;
	public:
		float getSalary(void) const;
};

class HourlyPaiedEmployee : public Employee {
	private:
		float workHours;
		float hourlyRate;
	public:
		float getSalary(void) const;
};

#endif EMPLYEE_H
