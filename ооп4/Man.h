#pragma once
#include <string>
using namespace std;
class Man
{
protected:
	string* name;
	int* age;
	int* weight;
	string* gender;
public:
	/*
	<Конструктор>
	@param string name - имя
	@param int age - возраст
	@param int weight - вес
	@param string gender - пол
	@return NULL
	*/
	Man(string name,int age,int weight,string gender);
	/*
	<Деструктор>
	@param Man* this
	@return NULL
	*/
	virtual ~Man();
	/*
	<Сеттер имени>
	@param Man* this
	@param string name - имя
	@return NULL
	*/
	void set_name(string name);
	/*
	<Конструктор копирования>
	@param Man* this
	@param const Man& a - объект класса, который используется для создания копии
	@return NULL
	*/
	Man(const Man& a);
	/*
	<Перегруженный оператор присваивания>
	@param Man* this
	@param Man a -  объект, к которому *this присваивается
	@return Man& 
	*/
	Man& operator=(Man a);
	/*
	<Геттер имени>
	@param Man* this
	@return string name - имя
	*/
	string get_name();
	/*
	<Сеттер возраста>
	@param Man* this
	@param int age
	@return NULL
	*/
	void set_age(int age);
	/*
	<Геттер возраста>
	@param Man* this
	@return int age - возраст
	*/
	int get_age();
	/*
	<Сеттер веса>
	@param Man* this
	@param int weight
	@return NULL
	*/
	void set_weight(int weight);
	/*
	<Геттер веса>
	@param Man* this
	@return int weight - вес
	*/
	int get_weight();
	/*
	<Сеттер пола>
	@param Man* this
	@param string gender
	@return NULL
	*/
	void set_gender(string gender);
	/*
	<Геттер пола>
	@param Man* this
	@return string gender
	*/
	string get_gender();
	/*
	<Конструктор>
	@param Man* this
	@return NULL
	*/
	Man();
	/*
	<Дружественный, перегруженный оператор вывода>
	@param ostream& out - поток, в который записываются данные
	@param Man& obj -  объект, который который выводится на экран
	@return ostream& 
	*/
	friend ostream& operator<<(ostream& out, Man& a);
	/*
	<Дружественный, перегруженный оператор ввода>
	@param istream& in - поток, с которого осуществляется чтение
	@param Man& obj -  объект, который вводится
	@return istream& (ссылка на поток ввода istream)
	*/
	friend istream& operator>>(istream& in, Man& a);
};

