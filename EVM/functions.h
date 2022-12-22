#pragma once
#include <iostream>
using namespace std;

/*
* @brief Возвращает целую часть корня
* @param numre_ - число
* @return Целая часть корня
*/
int MySqrt(int number_);

/*
* @brief Возвращает наиболее длинный префикс, входящий во все слова в массиве, а иначе пустую строку.
* @param str_ - массив слов типа char
* @param n - кол-во слов
* @return Наиболее длинный префикс
*/
char* LongestCommonPrefix(char** str_, int n);

/*
* @brief Возвращает длина строки
* @param str_ - строка типа char
* @return Длина строки
*/
int Strlen(char* str_);

/*
* @brief Класс односвязный список
*/
class List
{
private:
	/*
	* @brief Класс узел
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
	* @brief Конструктор по умолчанию.
	*/
	List();

	/*
	* @brief Деструктор.
	*/
	~List();

	/*
	* @brief Вставить элемент в конец.
	* @param data_ - элемент типа int
	*/
	void push_back(int data_);

	/*
	* @brief Удалить элемент.
	* @param data_ - элемент который нужно удалить
	*/
	void RemoveElem(int data_);

	/*
	* @brief Найти элемент, если найден то вернуть указатель на него.
	* @param data_ - искомый элемент
	*/
	Node* Search(int data_);

};

