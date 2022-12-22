#include "functions.h"
#include <string>

using namespace std;

int MySqrt(int number_)
{
   int left = 0;
   int right = number_;
   int middle = (left + right) / 2;

   while (right - left > 1)
   {
      if (middle * middle <= number_)
         left = middle;
      else
         right = middle;

      middle = (left + right) / 2;
   }
   return middle;
}

char* LongestCommonPrefix(char** str_, int n)
{
   // ≈сли массив строк пуст, вернуть пустую строку
   char* c = new char[1];
   c[0] = ' ';
   c[1] = '\0';
   if (n == 0)
      return c;

   // ≈сли массив строк содержит только одну строку, вернуть ее саму
   if (n == 1)
      return str_[0];

   // Ќаходим минимальную длину строки в массиве
   int minLength = strlen(str_[0]);
   for (int i = 1; i < n; i++)
      if (strlen(str_[i]) < minLength)
         minLength = strlen(str_[i]);

   char* commonPrefix = new char[minLength + 1];
   for (int i = 0; i < minLength; i++)
   {
      char current = str_[0][i];
      for (int j = 1; j < n; j++)
         if (str_[j][i] != current)
         {
            commonPrefix[i] = '\0';
            return commonPrefix;
         }

      commonPrefix[i] = current;
   }

   commonPrefix[minLength] = '\0';
   return commonPrefix;

}

int Strlen(char* str_)
{
   int size = 0;
   while (str_[size])
   {
      size++;
   }
   return size++;
}

List::List()
{
   size = 0;
   head = nullptr;
}

List::~List()
{
   Node* tmp = nullptr;
   while (head != nullptr)
   {
      tmp = head;
      head = head->pNext;

      delete[] tmp;
   }
}

void List::push_back(int data_)
{
   if (head == nullptr)
   {
      head = new Node(data_);
   }
   else
   {
      Node* current = this->head;

      while (current->pNext != nullptr)
      {
         current = current->pNext;
      }
      current->pNext = new Node(data_);

   }

   size++;
}

List::Node* List::Search(int num_)
{
   if (head == nullptr)
   {
      return nullptr;
   }
   else
   {
      Node* temp = head;

      while ((temp->data != num_) && (temp->pNext != nullptr))
      {
         temp = temp->pNext;
      }

      if (temp->data == num_)
         return temp;
      else
         return nullptr;
   }
}

void List::RemoveElem(int num_)
{
   if (head == nullptr)
      throw("Error: List is empty!");

   Node* temp = head;

   if (size == 1)
   {
      if (temp->data != num_)
      {

         return;
      }
      //throw("Error: Element not found!");
      else
      {
         delete[] temp;
         head = nullptr;
      }
   }
   else
   {
      Node* tempNext = nullptr;

      tempNext = Search(num_);
      if (tempNext == nullptr)
      {

         return;
      } //throw("Error: Element not found!");

      while (temp->pNext != tempNext)
      {
         temp = temp->pNext;
      }

      temp->pNext = tempNext->pNext;

      delete[] tempNext;
      size--;
   }
}



