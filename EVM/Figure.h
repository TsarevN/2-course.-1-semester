#pragma once

class Figure
{
public:
	/*
	* @brief Вычисляет периметр фигуры
	*/
	virtual double Perimeter() = 0;
	/*
	* @brief Вычисляет площадь фигуры
	*/
	virtual double Square() = 0;
};

class Rectangle : public Figure
{
private:
	double widht;
	double length;
public:
	/*
	* @brief Конструктор
	* @param length_ - длина
	* @param widht_ - ширина
	*/
	Rectangle(double length_, double widht_);

	/*
	* @brief Деструктор
	*/
	~Rectangle();

	/*
	* @brief Вычисляет периметр прямоугольника
	* @return Периметр
	*/
	double Perimeter() override;

	/*
	* @brief Вычисляет площадь прямоугольника
	* @return Площадь
	*/
	double Square() override;
};

class Circle : public Figure
{
private:
	double radius;
public:
	/*
	* @brief Конструктор
	* @param radius_ - радиус
	*/
	Circle(double radius_);

	/*
	* @brief Деструктор
	*/
	~Circle();

	/*
	* @brief Вычисляет периметр круга
	* @return Периметр
	*/
	double Perimeter() override;

	/*
	* @brief Вычисляет площадь круга
	* @return Площадь
	*/
	double Square() override;
};


class Triangle : public Figure
{
private:
	double sideOne;
	double sideTwo;
	double sideThree;
public:
	/*
	* @brief Конструктор
	* @param sideOne_ - сторона 1
	* @param sideTwo_ - сторона 2
	* @param sideThree_ - сторона 3
	*/
	Triangle(double sideOne_, double sideTwo_, double sideThree_);

	/*
	* @brief Деструктор
	*/
	~Triangle();

	/*
	* @brief Вычисляет периметр треуголника
	* @return Периметр
	*/
	double Perimeter() override;

	/*
	* @brief Вычисляет площадь треугольника
	* @return Площадь
	*/
	double Square() override;
};