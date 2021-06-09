#include "Class_Hacker.h"

Student::Student()
{
	age, standard = 0;
	first_name, last_name = "";
}

Student::~Student()
{
	age, standard = 0;
	first_name, last_name = "";
}

Student::Student(int _age, int _standard, string _first_name, string _last_name)
{
	age = _age;
	standard = _standard;
	first_name = _first_name;
	last_name = _last_name;
}

int Student::get_age()
{
	return age;
}

void Student::set_age(int _age)
{
	age = _age;
}

int Student::get_standard()
{
	return standard;
}

void Student::set_standard(int _standard)
{
	standard = _standard;
}

string Student::get_first_name()
{
	return first_name;
}

void Student::set_first_name(string _first_name)
{
	first_name = _first_name;
}

string Student::get_last_name()
{
	return last_name;
}

void Student::set_last_name(string _last_name)
{
	last_name = _last_name;
}

string Student::to_string()
{
	/*string str;
	str = to_string(_age) + "," + first_name + "," + last_name + "," + to_string(standard);
	return str;*/
	
	stringstream ss;
	char c = ',';
	ss << age << c << first_name << c << last_name << c << standard;
	return ss.str();
}
