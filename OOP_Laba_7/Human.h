#pragma once
#include <iostream>
#include <string>

using namespace std;

class Human
{
public:
	string surname;
	string name;
	string midname;
	int age;

	virtual void print() = 0;

	Human(string surname, string name, string midname, int age)
	{
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
	}
	Human(){}
	~Human(){}
};

