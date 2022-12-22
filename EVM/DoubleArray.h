#pragma once
#include <iostream>
using namespace std;

/*
* @brief Класс массив типа Double
*/
class DoubleArray
{
private:
	int size;
	double* array;

public:
	/*
	* @brief Конструктор по умолчанию
	*/
	DoubleArray();

	/*
	* @brief Конструктор с параметром
	* @param size_ - размер массива
	*/
	DoubleArray(int size_);

	/*
	* @brief Конструктор с параметрами
	* @param size_ - размер массива
	* @param array_ - массив
	*/
	DoubleArray(int size_, double* array_);

	/*
	* @brief Деструктор
	*/
	~DoubleArray();

	/*
	* @brief Перегрузка оператора +
	* @brief К каждому элементу массива прибавляется число
	* @param number_ - число типа double
	*/
	void operator+ (const double number_);

	/*
	* @brief Перегрузка оператора -
	* @brief Из каждого элемента массива вычитается число
	* @param number_ - число типа double
	*/
	void operator- (const double number_);

	/*
	* @brief Перегрузка оператора *
	* @brief Каждый элемент массива умножается на число
	* @param number_ - число типа double
	*/
	void operator* (const double number_);

	/*
	* @brief Перегрузка оператора /
	* @brief Каждый элемент массива делится на число
	* @param number_ - число типа double
	*/
	void operator/ (const double number_);


	//Capacity

	/*
	* @brief Пустой ли массив?
	* @return True or False
	*/
	bool Empty();

	/*
	* @brief Размер массива
	* @return Размер массива типа int
	*/
	int Size();

	//Access (возвращает указатель)

	/*
	* @brief Возвращает указатель на выбранный элемент
	* @param index_ - индекс элемента
	* @raturn Указатель на элемент
	*/
	double* At(int index_);

	/*
	* @brief Возвращает указатель на первый элемент
	* @return Указатель на первый элемент
	*/
	double* Front();

	/*
	* @brief Возвращает указатель на последний элемент
	* @return Указатель на последний элемент
	*/
	double* Back();

	/*
	* @brief Перегрузка оператора []
	* @param index_ - индекс элемента
	* @return Указатель на элемент
	*/
	double& operator[] (int index_);

	//Modifiers

	/*
	* @brief Очищает контейнер
	*/
	void Clear();

	/*
	* @brief Вставляет элемент на выбранную позицию
	* @param num_ - число
	* @param index_ - индекс
	*/
	void Insert(double num_, int index_);

	/*
	* @brief Удаляет выбранный элемент или диапозон
	* @param firsIndex_ - начало диапозона
	* @param lastIndex_ - конец диапозона
	*/
	void Erase(int firstIndex_, int lastIndex_);

	/*
	* @brief Вставляет в конец элемент
	* @param num_ - число
	*/
	void Push_back(double num_);

	/*
	* @brief Изменяет размер
	* @param size_ - новый размер
	*/
	void Resize(int size_);

	/*
	* @brief перегрузка оператора <<
	*/
	friend ostream& operator<<(ostream& out, const DoubleArray& obj_);

	/*
	* @brief перегрузка оператора >>
	*/
	friend istream& operator>>(istream& stream, DoubleArray& obj);
};
