#include "Employee.h"
#include "SalaryEmployee.h"
#include "HourlyEmployee.h"
#include "CommisionEmployee.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	SalaryEmployee salEmp;
	HourlyEmployee hourEmp;
	CommisionEmployee comEmp;

	cout << "The number of employees are " << numberOfEmployees << endl;

	cout << salEmp.empName << ", please enter your Salary : ";
	salEmp.setSalary();

	cout << hourEmp.empName << ", please enter your Hourly Rate : ";
	hourEmp.setHourlyRate();
	cout << hourEmp.empName << ", please enter your Hours worked : ";
	hourEmp.setHoursWorked();

	cout << comEmp.empName << ", please enter your Base Salary : ";
	comEmp.setBaseSalary();
	cout << comEmp.empName << ", please enter your Rate : ";
	comEmp.setRate();
	cout << comEmp.empName << ", please enter your Revenue : ";
	comEmp.setRevenue();

	float total;
	total = salEmp.salary() + hourEmp.salary() + comEmp.salary();
	cout << endl << "The total Salary is : R" << total << endl;




}