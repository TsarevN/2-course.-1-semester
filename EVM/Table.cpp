#include <iostream>
using namespace std;

template <typename T>
class Table
{
private:
	T** data;
	size_t rows;
	size_t cols;
public:
	/*
	* @brief �����������
	* @param rows_ - ������
	* @param cols_ - �������
	*/
	Table(size_t rows_, size_t cols_)
	{
		rows = rows_;
		cols = cols_;
		data = new T * [rows];
		for (size_t i = 0; i < rows; i++)
		{
			data[i] = new T[cols];
		}
	}

	/*
	* @brief ����������
	*/
	~Table()
	{
		for (size_t i = 0; i < rows; i++)
		{
			delete[] data[i];
		}
		delete[] data;
	}

	/*
	* @brief ������ ������ �������. ������ ������, ������� ��������, �����������
	* @param rows_ - ����� ���-�� �����
	* @param cols_ - ����� ���-�� ��������
	*/
	void Resize(size_t rows_, size_t cols_)
	{
		T** newData = new T * [rows_];
		for (size_t i = 0; i < rows_; i++)
		{
			newData[i] = new T[cols_];
		}

		for (size_t i = 0; i < min(rows, rows_); i++)
		{
			for (size_t j = 0; j < min(rows, rows_); j++)
			{
				newData[i][j] = data[i][j];
			}
		}

		for (size_t i = 0; i < rows; i++)
		{
			delete[] data[i];
		}
		delete[] data;

		rows = rows_;
		cols = cols_;
		data = newData;
	}

	/*
	* @brief ������ �������
	* @return ���������� ������ �������
	*/
	pair<size_t, size_t> size() const
	{
		return { rows, cols };
	}

	/*
	* @brief ���������� ��������� []
	*/
	T* operator[](size_t el)
	{
		return data[el];
	}
	/*
	* @brief ���������� ��������� <<
	*/
	friend ostream& operator<<(ostream& out, const Table& table)
	{
		for (size_t i = 0; i < table.rows; i++)
		{
			for (size_t j = 0; j < table.cols; j++)
			{
				out << table.data[i][j] << " ";
			}
			out << endl;
		}
		return out;
	}

	/*
	* @brief ���������� ��������� >>
	*/
	friend istream& operator>>(istream& in, Table& table)
	{
		for (size_t i = 0; i < table.rows; i++)
		{
			for (size_t j = 0; j < table.cols; j++)
			{
				in >> table.data[i][j];
			}
		}
		return in;
	}
};

