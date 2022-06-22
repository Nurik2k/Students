#pragma once
#include <iostream>
#include <string>

using namespace std;
class student
{
private:
	string surename;
	string name;
	string last_name;
	size_t _group;
	size_t perfomance;
	
public:
	student(string sn, string nm, string ln, size_t grp, size_t prf): surename(sn), name(nm), last_name(ln), _group(grp), perfomance(prf){}
	void set_name(string sn, string nm, string ln) { surename = sn; name = nm; last_name = ln; }
	void set_stud(size_t grp, size_t prf) { _group = grp; perfomance = prf; }
	string get_surename() { return surename; }
	string get_name() { return name; }
	string get_last_name() { return last_name; }
	size_t get_group() { return _group; }
	size_t get_perf() { return perfomance; }
	bool operator<(const student& obj) { return perfomance < obj.perfomance; }

};

