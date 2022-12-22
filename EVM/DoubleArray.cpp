#pragma once
#include "DoubleArray.h"
#include <iostream>


using namespace std;

DoubleArray::DoubleArray()
{
   size = 0;
   array = nullptr;
}

DoubleArray::DoubleArray(int size_)
{
   size = size_;
   array = new double[size];
}

DoubleArray::DoubleArray(int size_, double* array_)
{
   size = size_;
   array = new double[size];
   for (int i = 0; i < size; i++)
   {
      array[i] = array_[i];
   }
}

DoubleArray::~DoubleArray()
{
   delete[] array;
}

void DoubleArray::operator+(const double number_)
{
   for (int i = 0; i < size; ++i)
   {
      array[i] += number_;
   }

}

void DoubleArray::operator-(const double number_)
{
   for (int i = 0; i < size; i++)
   {
      array[i] -= number_;
   }

}

void DoubleArray::operator*(const double number_)
{
   for (int i = 0; i < size; i++)
   {
      array[i] *= number_;
   }

}

void DoubleArray::operator/(const double number_)
{
   for (int i = 0; i < size; i++)
   {
      array[i] /= number_;
   }

}

bool DoubleArray::Empty()
{
   if (size == 0)
   {
      return true;
   }
   else
   {
      return false;
   }
}

int DoubleArray::Size()
{
   return size;
}

double* DoubleArray::At(int index_)
{
   if ((index_ >= size) || (index_ < 0))
   {
      cout << "This position is not in the array.";
      exit(1);
   }
   else
   {
      return &array[index_];
   }
}

double* DoubleArray::Front()
{
   return &array[0];
}

double* DoubleArray::Back()
{
   return &array[size - 1];
}

double& DoubleArray::operator[](int index_)
{
   if ((index_ >= size) || (index_ < 0))
   {
      cout << "This position is not in the array.";
      exit(1);
   }
   else
   {
      return array[index_];
   }
}

void DoubleArray::Clear()
{
   if (array != nullptr)
   {
      delete[] array;
      array = nullptr;
      size = 0;
   }
}

void DoubleArray::Insert(double num_, int index_)
{
   if ((index_ >= size) || (index_ < 0))
   {
      cout << "This position is not in the array.";
      exit(1);
   }
   size++;

   double* temp = new double[size];

   for (int i = 0; i < index_; i++)
   {
      temp[i] = array[i];
   }

   temp[index_] = num_;

   for (int i = index_ + 1; i < size; i++)
   {
      temp[i] = array[i - 1];
   }
   delete[] array;

   array = new double[size];
   for (int i = 0; i < size; i++)
   {
      array[i] = temp[i];
   }
   delete[] temp;
}

void DoubleArray::Push_back(double num_)
{
   Insert(num_, size);
}

void DoubleArray::Resize(int size_)
{
   if (size_ > size)
   {
      double* temp = new double[size_];

      for (int i = 0; i < size; i++)
      {
         temp[i] = array[i];
      }

      for (int i = 0; i < size; i++)
      {
         array[i] = 0;
      }
      size = size_;
      delete[] array;
      array = new double[size];
      for (int i = 0; i < size; i++)
      {
         array[i] = temp[i];
      }
      delete[] temp;
   }
   if (size == size_)
   {
      return;
   }
   else
   {
      size = size_;
      double* temp = new double[size];
      for (int i = 0; i < size; i++)
      {
         temp[i] = array[i];
      }
      delete[] array;
      array = new double[size];
      for (int i = 0; i < size; i++)
      {
         array[i] = temp[i];
      }
      delete[] temp;
   }
}

void DoubleArray::Erase(int firstIndex_, int lastIndex_)
{
   if ((firstIndex_ >= size) || (firstIndex_ < 0) || (lastIndex_ < 0) || (firstIndex_ > lastIndex_))
   {
      cout << "This position is not in the array.";
      exit(1);
   }
   int indexSize = lastIndex_ - firstIndex_ + 1;
   int newSize = size - indexSize;

   double* temp = new double[newSize];
   int n = 0;
   for (int i = 0; i < firstIndex_; i++)
   {
      temp[n] = array[i];
      n++;
   }

   for (int i = lastIndex_ + 1; i < size; i++)
   {
      temp[n] = array[i];
      n++;
   }

   size = newSize;
   delete[] array;
   array = new double[size];

   for (int i = 0; i < size; i++)
      array[i] = temp[i];

   delete[] temp;

}

ostream& operator<<(ostream& out, const DoubleArray& obj_)
{
   if (obj_.size == 0)
      return out;
   for (int i = 0; i < obj_.size; i++)
      out << obj_.array[i] << " ";
   return out;
}

istream& operator>>(istream& stream, DoubleArray& obj_)
{
   for (int i = 0; i <obj_.size ; i++)
   {
      stream >> obj_.array[i];
   }
   return stream;
}