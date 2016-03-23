#include "CommisionEmployee.h"


CommisionEmployee::CommisionEmployee()
{
	numberOfEmployees++;
}

void CommisionEmployee::setBaseSalary()
{
	cin >> base;
}

void CommisionEmployee::setRate()
{
	cin >> rate;
}

void CommisionEmployee::setRevenue()
{
	cin >> rev;
	empSal = base + (rate * rev);
}

CommisionEmployee::~CommisionEmployee()
{
}
