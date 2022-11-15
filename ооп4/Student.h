#pragma once
#include "Man.h"
class Student: public Man
{
	int* year;
public:
	/*
	<Конструктор>
	@param string name
	@param int age
	@param int weight
	@param string gender
	@param int year
	@return NULL
	*/
	Student(string name, int age, int weight,string gender,int year);
	/*
	<Конструктор>
	@param Student* this
	@return NULL
	*/
	Student();
	/*
	<Деструктор>
	@param Student* this
	@return NULL
	*/
	~Student();
	/*
	<Сеттер года обучения>
	@param Student* this
	@param int year
	@return NULL
	*/
	void set_year(int year);
	/*
	<Геттер года обучения>
	@param Student* this
	@return int year
	*/
	int get_year();
	/*
	<Метод добавления года>
	@param Student *this
	@return NULL 
	*/
	void add();
	/*
	<Перегруженный оператор присваивания>
	@param Student* this
	@param Student a -  объект, к которому *this присваивается
	@return Student&
	*/
	Student& operator=(Student a);
	/*
	<Конструктор копирования>
	@param Student* this
	@param Student& a - объект класса, который используется для создания копии
	@return NULL
	*/
	Student(Student& a);
};

