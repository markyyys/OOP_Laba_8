#pragma once
#include "Human.h"

class Student :	public Human
{
public:
	bool on_lesson;

	void print() override
	{
		cout << "Surname: " << surname << endl;
		cout << "Name: " << name << endl;
		cout << "Midname: " << midname << endl;
		cout << "Age: " << age << endl;
		if (on_lesson == true)
			cout << "Student is on lesson" << endl;
		else
			cout << "Student isn't on lesson" << endl;
		cout << endl;
	}

	Student(string surname, string name, string midname, int age, bool on_lesson) : Human(surname, name, midname, age)
	{
		this->on_lesson = on_lesson;
	}
	
	Student(){}
	~Student(){}
};