#include <iostream>
#include <sstream>
#include <string>
#include <sstream>
#pragma once
using namespace std;
#ifndef Student_H_
#define Studnet_H_

class Student
{
private:
	int age, standard;
	string first_name, last_name;

public:
	Student();
	~Student();
	Student(int _age, int _standard, string _first_name, string _last_name);
	
	int get_age();
	void set_age(int _age);

	int get_standard();
	void set_standard(int _standard);

	string get_first_name();
	void set_first_name(string _first_name);

	string get_last_name();
	void set_last_name(string _last_name);

	string to_string();
};


#endif // !Student_H_



