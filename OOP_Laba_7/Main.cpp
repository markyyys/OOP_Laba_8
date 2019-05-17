#include "Human.h"
#include "Student.h"
#include "Boss.h"
#include "Complex.h"
#include <iostream>
#include <vector>
#include <list>
#include <queue>



using namespace std;

Boss boss_1("Snegirev","Mark","Vitalievich",50,10);
Boss boss_2("Kolmikoff","Mikhail","Mikhailovich",49,9);
Student student_1("A", "B", "C", 5, true);
Student student_2("B", "C", "D", 10, false);
Student student_3("C", "D", "F", 15, true);
Student student_4("D", "F", "G", 20, false);

typedef vector <Student> students;
students students_ = { student_1,student_2,student_3,student_4 };

typedef list <Complex> complex;
complex complex_;

queue <string> cars;

int main()
{
	students_.resize(4);
	for (students::iterator i = students_.begin(); i != students_.end(); ++i)
	{
		i->print();
	}

	complex_.resize(10);
	for (complex::iterator i = complex_.begin(); i != complex_.end(); ++i)
	{
		cout << i->real << endl;
		cout << i->fake << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}