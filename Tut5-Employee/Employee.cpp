#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

Employee::Employee()
{
	cout << "Enter Employee Name : ";
	cin >> empName;
	cout << "Enter Employee Number : ";
	cin >> empNumber;

	numberOfEmployees++;
}

Employee::Employee(string n,int num)
{
	empName = n;
	empNumber = num;
	numberOfEmployees++;
}

string Employee::name()
{
	return empName;
}

int Employee::staffNumber()
{
	return empNumber;
}

float Employee::salary()
{
	return empSal;
}


Employee::~Employee()
{
}
