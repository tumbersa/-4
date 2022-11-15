#include "Student.h"
Student::Student(string name, int age, int weight, string gender,int year):Man(name,age,weight,gender) {
	this->year =new int (year);
}
Student::Student() :Man() {
	this->year = new int(0);
}
Student::~Student(){
	delete year;
}
void Student::set_year(int year) {
	this->year = new int(year);
}
int Student::get_year() {
	return *year;
}
void Student::add() {
	(* year)++;
}
Student& Student::operator=(Student a) {
	*name = *a.name;
	*age = *a.age;
	*weight = *a.weight;
	*gender = *a.gender;
	*year = *a.year;
	return *this;
}
Student::Student(Student& a):Man(*a.name,*a.age,*a.weight,*a.gender) {
	year = new int(*a.year);
}