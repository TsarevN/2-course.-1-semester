#pragma once
#include <iostream>
using namespace std;

/*
* @brief ����� ������ ���� Double
*/
class DoubleArray
{
private:
	int size;
	double* array;

public:
	/*
	* @brief ����������� �� ���������
	*/
	DoubleArray();

	/*
	* @brief ����������� � ����������
	* @param size_ - ������ �������
	*/
	DoubleArray(int size_);

	/*
	* @brief ����������� � �����������
	* @param size_ - ������ �������
	* @param array_ - ������
	*/
	DoubleArray(int size_, double* array_);

	/*
	* @brief ����������
	*/
	~DoubleArray();

	/*
	* @brief ���������� ��������� +
	* @brief � ������� �������� ������� ������������ �����
	* @param number_ - ����� ���� double
	*/
	void operator+ (const double number_);

	/*
	* @brief ���������� ��������� -
	* @brief �� ������� �������� ������� ���������� �����
	* @param number_ - ����� ���� double
	*/
	void operator- (const double number_);

	/*
	* @brief ���������� ��������� *
	* @brief ������ ������� ������� ���������� �� �����
	* @param number_ - ����� ���� double
	*/
	void operator* (const double number_);

	/*
	* @brief ���������� ��������� /
	* @brief ������ ������� ������� ������� �� �����
	* @param number_ - ����� ���� double
	*/
	void operator/ (const double number_);


	//Capacity

	/*
	* @brief ������ �� ������?
	* @return True or False
	*/
	bool Empty();

	/*
	* @brief ������ �������
	* @return ������ ������� ���� int
	*/
	int Size();

	//Access (���������� ���������)

	/*
	* @brief ���������� ��������� �� ��������� �������
	* @param index_ - ������ ��������
	* @raturn ��������� �� �������
	*/
	double* At(int index_);

	/*
	* @brief ���������� ��������� �� ������ �������
	* @return ��������� �� ������ �������
	*/
	double* Front();

	/*
	* @brief ���������� ��������� �� ��������� �������
	* @return ��������� �� ��������� �������
	*/
	double* Back();

	/*
	* @brief ���������� ��������� []
	* @param index_ - ������ ��������
	* @return ��������� �� �������
	*/
	double& operator[] (int index_);

	//Modifiers

	/*
	* @brief ������� ���������
	*/
	void Clear();

	/*
	* @brief ��������� ������� �� ��������� �������
	* @param num_ - �����
	* @param index_ - ������
	*/
	void Insert(double num_, int index_);

	/*
	* @brief ������� ��������� ������� ��� ��������
	* @param firsIndex_ - ������ ���������
	* @param lastIndex_ - ����� ���������
	*/
	void Erase(int firstIndex_, int lastIndex_);

	/*
	* @brief ��������� � ����� �������
	* @param num_ - �����
	*/
	void Push_back(double num_);

	/*
	* @brief �������� ������
	* @param size_ - ����� ������
	*/
	void Resize(int size_);

	/*
	* @brief ���������� ��������� <<
	*/
	friend ostream& operator<<(ostream& out, const DoubleArray& obj_);

	/*
	* @brief ���������� ��������� >>
	*/
	friend istream& operator>>(istream& stream, DoubleArray& obj);
};
