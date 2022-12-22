#pragma once

class Figure
{
public:
	/*
	* @brief ��������� �������� ������
	*/
	virtual double Perimeter() = 0;
	/*
	* @brief ��������� ������� ������
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
	* @brief �����������
	* @param length_ - �����
	* @param widht_ - ������
	*/
	Rectangle(double length_, double widht_);

	/*
	* @brief ����������
	*/
	~Rectangle();

	/*
	* @brief ��������� �������� ��������������
	* @return ��������
	*/
	double Perimeter() override;

	/*
	* @brief ��������� ������� ��������������
	* @return �������
	*/
	double Square() override;
};

class Circle : public Figure
{
private:
	double radius;
public:
	/*
	* @brief �����������
	* @param radius_ - ������
	*/
	Circle(double radius_);

	/*
	* @brief ����������
	*/
	~Circle();

	/*
	* @brief ��������� �������� �����
	* @return ��������
	*/
	double Perimeter() override;

	/*
	* @brief ��������� ������� �����
	* @return �������
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
	* @brief �����������
	* @param sideOne_ - ������� 1
	* @param sideTwo_ - ������� 2
	* @param sideThree_ - ������� 3
	*/
	Triangle(double sideOne_, double sideTwo_, double sideThree_);

	/*
	* @brief ����������
	*/
	~Triangle();

	/*
	* @brief ��������� �������� �����������
	* @return ��������
	*/
	double Perimeter() override;

	/*
	* @brief ��������� ������� ������������
	* @return �������
	*/
	double Square() override;
};