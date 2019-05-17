#pragma once
#include "Human.h"

class Boss : public Human
{
public:
	int number_of_workers;

	void print() override
	{
		cout << "Surname: " << surname << endl;
		cout << "Name: " << name << endl;
		cout << "Midname: " << midname << endl;
		cout << "Age: " << age << endl;
		cout << "Number of workers is " << number_of_workers << endl;
		cout << endl;
	}

	Boss(string surname, string name, string midname, int age, int number_of_workers) : Human(surname, name, midname, age)
	{
		this->number_of_workers = number_of_workers;
	}
	Boss(){}
	~Boss(){}
};