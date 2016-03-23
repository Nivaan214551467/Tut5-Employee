#include "HourlyEmployee.h"


HourlyEmployee::HourlyEmployee()
{
	numberOfEmployees++;
}

void HourlyEmployee::setHourlyRate()
{
	cin >> hourlyRate;
}

void HourlyEmployee::setHoursWorked()
{
	cin >> hoursWorked;
	empSal = hourlyRate * hoursWorked;
}

HourlyEmployee::~HourlyEmployee()
{
}
