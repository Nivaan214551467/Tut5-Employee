#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee
{
private :
	
public:
	string empName;
	int empNumber;
	float empSal;

	string name();
	int staffNumber();
	float salary();
	float salary(float, int);
	float salary(float, float,float);
	
	Employee();
	Employee(string n,int num);
	~Employee();
};

static int numberOfEmployees;

