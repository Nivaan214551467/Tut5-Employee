#pragma once
#include "Employee.h"

class HourlyEmployee : public Employee
{
public:
	float hourlyRate;
	int hoursWorked;

	void setHourlyRate();
	void setHoursWorked();

	HourlyEmployee();
	~HourlyEmployee();
};

