#pragma once
#include <iostream>
using namespace std;

/*
* @brief ���������� ����� ����� �����
* @param numre_ - �����
* @return ����� ����� �����
*/
int MySqrt(int number_);

/*
* @brief ���������� �������� ������� �������, �������� �� ��� ����� � �������, � ����� ������ ������.
* @param str_ - ������ ���� ���� char
* @param n - ���-�� ����
* @return �������� ������� �������
*/
char* LongestCommonPrefix(char** str_, int n);

/*
* @brief ���������� ����� ������
* @param str_ - ������ ���� char
* @return ����� ������
*/
int Strlen(char* str_);

/*
* @brief ����� ����������� ������
*/
class List
{
private:
	/*
	* @brief ����� ����
	*/
	class Node
	{
	public:
		Node* pNext;
		int data;

		Node(int data = 0, Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	int size;
	Node* head;
public:
	/*
	* @brief ����������� �� ���������.
	*/
	List();

	/*
	* @brief ����������.
	*/
	~List();

	/*
	* @brief �������� ������� � �����.
	* @param data_ - ������� ���� int
	*/
	void push_back(int data_);

	/*
	* @brief ������� �������.
	* @param data_ - ������� ������� ����� �������
	*/
	void RemoveElem(int data_);

	/*
	* @brief ����� �������, ���� ������ �� ������� ��������� �� ����.
	* @param data_ - ������� �������
	*/
	Node* Search(int data_);

};

