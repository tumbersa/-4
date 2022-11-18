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
	<�����������>
	@param string name - ���
	@param int age - �������
	@param int weight - ���
	@param string gender - ���
	@return NULL
	*/
	Man(string name,int age,int weight,string gender);
	/*
	<����������>
	@param Man* this
	@return NULL
	*/
	virtual ~Man();
	/*
	<������ �����>
	@param Man* this
	@param string name - ���
	@return NULL
	*/
	void set_name(string name);
	/*
	<����������� �����������>
	@param Man* this
	@param const Man& a - ������ ������, ������� ������������ ��� �������� �����
	@return NULL
	*/
	Man(const Man& a);
	/*
	<������������� �������� ������������>
	@param Man* this
	@param Man a -  ������, � �������� *this �������������
	@return Man& 
	*/
	Man& operator=(Man a);
	/*
	<������ �����>
	@param Man* this
	@return string name - ���
	*/
	string get_name();
	/*
	<������ ��������>
	@param Man* this
	@param int age
	@return NULL
	*/
	void set_age(int age);
	/*
	<������ ��������>
	@param Man* this
	@return int age - �������
	*/
	int get_age();
	/*
	<������ ����>
	@param Man* this
	@param int weight
	@return NULL
	*/
	void set_weight(int weight);
	/*
	<������ ����>
	@param Man* this
	@return int weight - ���
	*/
	int get_weight();
	/*
	<������ ����>
	@param Man* this
	@param string gender
	@return NULL
	*/
	void set_gender(string gender);
	/*
	<������ ����>
	@param Man* this
	@return string gender
	*/
	string get_gender();
	/*
	<�����������>
	@param Man* this
	@return NULL
	*/
	Man();
	/*
	<�������������, ������������� �������� ������>
	@param ostream& out - �����, � ������� ������������ ������
	@param Man& obj -  ������, ������� ������� ��������� �� �����
	@return ostream& 
	*/
	friend ostream& operator<<(ostream& out, Man& a);
	/*
	<�������������, ������������� �������� �����>
	@param istream& in - �����, � �������� �������������� ������
	@param Man& obj -  ������, ������� ��������
	@return istream& (������ �� ����� ����� istream)
	*/
	friend istream& operator>>(istream& in, Man& a);
};

