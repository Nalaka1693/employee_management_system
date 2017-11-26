#include <iostream>
#include <string>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
	private:
		string name;
		int age;
		string employeeId;
	public:
		Employee() {}
		string getName(void) const;
		int getAge(void) const;
		string getId(void) const;
};

class SalariedEmployee : public Employee {
	private:
		float monthlySalary;
	public:
		SalariedEmployee(string n, int a, string id, float s) {
			name = n;
			age = a;
			employeeId = id;
			monthlySalary = s;
		}
		
		void setSalary(float) const;
		float getSalary(void) const;
};

class HourlyPaiedEmployee : public Employee {
	private:
		float workHours;
		float hourlyRate;
	public:
		HourlyPaiedEmployee(string n, int a, string id, float r) {
			name = n;
			age = a;
			employeeId = id;
			hourlyRate = r;
		}
		
		void setHours(float) const;
		void setHourlyRate(float) const;
		float getSalary(void) const;
};

#endif