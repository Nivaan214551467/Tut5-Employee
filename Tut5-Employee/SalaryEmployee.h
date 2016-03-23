#pragma once
#include "Employee.h"
#include <iostream>
#include <string>

class SalaryEmployee : public Employee
{
public:
	SalaryEmployee();
	void setSalary();
	~SalaryEmployee();
};

