#pragma once
#include "Man.h"
class Student: public Man
{
	int* year;
public:
	/*
	<�����������>
	@param string name
	@param int age
	@param int weight
	@param string gender
	@param int year
	@return NULL
	*/
	Student(string name, int age, int weight,string gender,int year);
	/*
	<�����������>
	@param Student* this
	@return NULL
	*/
	Student();
	/*
	<����������>
	@param Student* this
	@return NULL
	*/
	~Student();
	/*
	<������ ���� ��������>
	@param Student* this
	@param int year
	@return NULL
	*/
	void set_year(int year);
	/*
	<������ ���� ��������>
	@param Student* this
	@return int year
	*/
	int get_year();
	/*
	<����� ���������� ����>
	@param Student *this
	@return NULL 
	*/
	void add();
	/*
	<������������� �������� ������������>
	@param Student* this
	@param Student a -  ������, � �������� *this �������������
	@return Student&
	*/
	Student& operator=(Student a);
	/*
	<����������� �����������>
	@param Student* this
	@param Student& a - ������ ������, ������� ������������ ��� �������� �����
	@return NULL
	*/
	Student(Student& a);
};

