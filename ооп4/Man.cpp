#include "Man.h"
#include <iostream>
Man::Man() {
	this->name = new string("");
	this->age = new int(0);
	this->weight = new int(0);
	this->gender = new string("");
}
Man::Man(string name, int age, int weight, string gender) {
	this->name = new string (name);
	this->age = new int(age);
	this->weight = new int(weight);
	this->gender = new string(gender);
}
Man::Man(const Man& a) {
	name = new string(*a.name);
	age = new int(*a.age);
	weight = new int(*a.weight);
	gender = new string(*a.gender);
}
Man::~Man() {
	delete name;
	delete age;
	delete weight;
	delete gender;
}
void Man::set_name(string name) {
	this->name = new string(name);
}
string Man::get_name() {
	return *name;
}
void Man::set_age(int age) {
	this->age = new int(age);
}
int Man::get_age() {
	return *age;
}
void Man::set_weight(int weight) {
	this->weight = new int(weight);
}
int Man::get_weight() {
	return *weight;
}
void Man::set_gender(string gender) {
	this->gender = new string(gender);
}
string Man::get_gender() {
	return *gender;
}
Man& Man::operator=(Man a) {
	*name = *a.name;
	*age = *a.age;
	*weight = *a.weight;
	*gender = *a.gender;
	return *this;
}
ostream& operator<<(ostream& out, Man& a) {
	out << a.get_name() << ' ' << a.get_gender() << " " << a.get_age() << ' ' <<a.get_weight() << '\n';
	return out;
}
istream& operator>>(istream& in, Man& a) {
	in >> *a.name >> *a.gender >> *a.age>>*a.weight;
	return in;
}