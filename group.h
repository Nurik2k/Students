#pragma once
#include <iostream>
#include <list>
#include "student.h"

using namespace std;
class group
{
private:
	list<student> students;

public:
	void add(student st) { students.push_back(st); }
	void show() {
		for (auto it = students.begin(); it != students.end(); it++)
			cout << " < " << (*it).get_surename() << " | " << (*it).get_name() << " | " << (*it).get_last_name() << " | " << (*it).get_group() << " | " << (*it).get_perf() << " > " << endl;;
	} 
	void sort() { students.sort(); }
};

