#pragma once
#include "Employee.h"

class CommisionEmployee : public Employee
{
public:
	float base;
	float rate;
	float rev;

	CommisionEmployee();

	void setBaseSalary();
	void setRate();
	void setRevenue();

	~CommisionEmployee();
};

