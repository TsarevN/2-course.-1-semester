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
	* @brief Конструктор по умолчанию
	*/
	String();

	/*
	* @brief Конструктор с параметром
	* @param size_ - размер
	*/
	String(int size_);

	/*
	* @brief Конструктор с параметрами
	* @param size_ - размер
	* @param str_ - массив типа char
	*/
	String(int size_, const char* str_);

	/*
	* @brief Конструктор копирования
	* @param str_ - объек класса String
	*/
	String(const String& str_);

	/*
	* @brief Деструктор
	*/
	~String();

	/*
	* @brief Перегрузка оператора =
	* @param str_ - объект класса String
	*/
	String& operator=(const String& str_);

	/*
	* @brief Перегрузка оператора ==
	* @param str_ - объект класса String
	* @return True or False
	*/
	bool operator==(const String& str_);

	/*
	* @brief Перегрузка оператора !=
	* @param str_ - объект класса String
	* @return True or False
	*/
	bool operator!=(const String& str_);

	/*
	* @brief Перегрузка оператора <
	* @param str_ - объект класса String
	* @return True or False
	*/
	bool operator<(const String& str_);

	/*
	* @brief Перегрузка оператора >
	* @param str_ - объект класса String
	* @return True or False
	*/
	bool operator>(const String& str_);

	/*
	* @brief Перегрузка оператора +
	* @param str_ - объект класса String
	* @return Конкатенация строк
	*/
	String operator+(const String& str_);

	/*
	* @brief Перегрузка оператора +=
	* @param str_ - объект класса String
	* @return Конкатенация строк и присваивание
	*/
	String& operator+=(const String& str_);

	/*
	* @brief Пустая ли строка
	* @return True or False
	*/
	bool IsEmpty();

	/*
	* @brief Длина строки
	* @return Возвращает длину строки
	*/
	int Lenght();

	/*
	* @brief Возвращает указатель на выбранный элемент
	* @param index_ - индекс элемента
	* @raturn Указатель на элемент
	*/
	char& At(int index_);

	/*
	* @brief Возвращает указатель на первый элемент
	* @return Указатель на первый элемент
	*/
	char& Front();

	/*
	* @brief Возвращает указатель на последний элемент
	* @return Указатель на последний элемент
	*/
	char& Back();

	/*
	* @brief Перегрузка оператора []
	* @param index_ - индекс элемента
	* @return Указатель на элемент
	*/
	char& operator[](int index_);

	/*
	* @brief Очищает контейнер
	*/
	void Clear();

	/*
	* @brief Вставляет символ на выбранную позицию
	* @param c_ - символ
	* @param pos_ - позиция
	*/
	void Insert(char c_, int pos_);

	/*
	* @brief Удаляет выбранный символ
	* @param pos_ - позицияекш
	*/
	void Erase(int pos_);

	/*
	* @brief Меня местами две строки
	* @param str_ - объекс класса String
	*/
	void Swap(String str_);

	/*
	* @brief Вернуть строку
	* @param Возврщает строку "СИ"
	*/
	char* C_str();

	/*
	* @brief Копирование
	* @param str_ - объект класса String
	*/
	void Copy(const String& str_);


	/*
	* @brief Перегрузка оператора <<
	*/
	friend ostream& operator<<(ostream& stream, const String& str_);

	/*
	* @brief Перегрузка оператора >>
	*/
	friend std::istream& operator>>(std::istream& stream, String& str_);
};