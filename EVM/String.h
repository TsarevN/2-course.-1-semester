#pragma once
#include <iostream>
using namespace std;

class String
{
private:
	int size;
	char* string;
public:
	/*
	* @brief ����������� �� ���������
	*/
	String();

	/*
	* @brief ����������� � ����������
	* @param size_ - ������
	*/
	String(int size_);

	/*
	* @brief ����������� � �����������
	* @param size_ - ������
	* @param str_ - ������ ���� char
	*/
	String(int size_, const char* str_);

	/*
	* @brief ����������� �����������
	* @param str_ - ����� ������ String
	*/
	String(const String& str_);

	/*
	* @brief ����������
	*/
	~String();

	/*
	* @brief ���������� ��������� =
	* @param str_ - ������ ������ String
	*/
	String& operator=(const String& str_);

	/*
	* @brief ���������� ��������� ==
	* @param str_ - ������ ������ String
	* @return True or False
	*/
	bool operator==(const String& str_);

	/*
	* @brief ���������� ��������� !=
	* @param str_ - ������ ������ String
	* @return True or False
	*/
	bool operator!=(const String& str_);

	/*
	* @brief ���������� ��������� <
	* @param str_ - ������ ������ String
	* @return True or False
	*/
	bool operator<(const String& str_);

	/*
	* @brief ���������� ��������� >
	* @param str_ - ������ ������ String
	* @return True or False
	*/
	bool operator>(const String& str_);

	/*
	* @brief ���������� ��������� +
	* @param str_ - ������ ������ String
	* @return ������������ �����
	*/
	String operator+(const String& str_);

	/*
	* @brief ���������� ��������� +=
	* @param str_ - ������ ������ String
	* @return ������������ ����� � ������������
	*/
	String& operator+=(const String& str_);

	/*
	* @brief ������ �� ������
	* @return True or False
	*/
	bool IsEmpty();

	/*
	* @brief ����� ������
	* @return ���������� ����� ������
	*/
	int Lenght();

	/*
	* @brief ���������� ��������� �� ��������� �������
	* @param index_ - ������ ��������
	* @raturn ��������� �� �������
	*/
	char& At(int index_);

	/*
	* @brief ���������� ��������� �� ������ �������
	* @return ��������� �� ������ �������
	*/
	char& Front();

	/*
	* @brief ���������� ��������� �� ��������� �������
	* @return ��������� �� ��������� �������
	*/
	char& Back();

	/*
	* @brief ���������� ��������� []
	* @param index_ - ������ ��������
	* @return ��������� �� �������
	*/
	char& operator[](int index_);

	/*
	* @brief ������� ���������
	*/
	void Clear();

	/*
	* @brief ��������� ������ �� ��������� �������
	* @param c_ - ������
	* @param pos_ - �������
	*/
	void Insert(char c_, int pos_);

	/*
	* @brief ������� ��������� ������
	* @param pos_ - ����������
	*/
	void Erase(int pos_);

	/*
	* @brief ���� ������� ��� ������
	* @param str_ - ������ ������ String
	*/
	void Swap(String str_);

	/*
	* @brief ������� ������
	* @param ��������� ������ "��"
	*/
	char* C_str();

	/*
	* @brief �����������
	* @param str_ - ������ ������ String
	*/
	void Copy(const String& str_);


	/*
	* @brief ���������� ��������� <<
	*/
	friend ostream& operator<<(ostream& stream, const String& str_);

	/*
	* @brief ���������� ��������� >>
	*/
	friend std::istream& operator>>(std::istream& stream, String& str_);
};