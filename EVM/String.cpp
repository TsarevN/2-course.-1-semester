#include "String.h"

String::String()
{
   size = 0;
   string = nullptr;
}

String::String(int size_)
{
   size = size_;
   string = new char[size];
}

String::String(int size_, const char* str_)
{
   if ((size_ == 0) || (str_ == nullptr))
   {
      size = size_;
      string = nullptr;
      return;
   }
   size = size_;
   string = new char[size + 1];

   for (int i = 0; i < size; i++)
   {
      string[i] = str_[i];
   }
   string[size] = '\0';
}

String::String(const String& str_)
{
   if ((str_.size == 0) || (str_.string == nullptr))
   {
      size = 0;
      string = nullptr;
      return;
   }

   size = str_.size;
   string = new char[size + 1];

   for (int i = 0; i < size; i++)
   {
      string[i] = str_.string[i];
   }
   string[size] = '\0';
}

String::~String()
{
   size = 0;
   delete[] string;
   string = nullptr;
}

String& String::operator=(const String& str_)
{
   if (this == &str_)
      return *this;
   size = 0;
   delete[] string;
   string = nullptr;
   size = str_.size;
   string = new char[size + 1];

   for (int i = 0; i < size; i++)
   {
      string[i] = str_.string[i];
   }
   string[size] = '\0';

   return *this;
}

bool String::operator==(const String& str_)
{
   if (size != str_.size)
      return false;
   if ((string == nullptr) && (str_.string == nullptr))
      return true;
   if ((string == nullptr) || (str_.string == nullptr))
      return false;

   for (int i = 0; i < size; i++)
   {
      if (string[i] != str_.string[i])
         return false;
   }

   return true;
}

bool String::operator!=(const String& str_)
{
   return !(*this == str_);
}

bool String::operator<(const String& str_)
{
   if (size < str_.size)
   {
      return true;
   }
   if (size > str_.size)
   {
      return false;
   }
   if ((string == nullptr) && (str_.string == nullptr))
   {
      return false;
   }

   return false;
}

bool String::operator>(const String& str_)
{
   if (size > str_.size)
   {
      return true;
   }
   if (size < str_.size)
   {
      return false;
   }
   if ((string == nullptr) && (str_.string == nullptr))
   {
      return false;
   }

   return false;
}

String String::operator+(const String& str_)
{
   String res;
   res.size = size + str_.size;
   res.string = new char[res.size + 1];

   int count = 0;
   for (int i = 0; i < size; i++)
   {
      res.string[count] = string[i];
      count++;
   }
   for (int i = 0; i < str_.size; i++)
   {
      res.string[count] = str_.string[i];
      count++;
   }
   res.string[res.size] = '\0';
   return res;
}

String& String::operator+=(const String& str_)
{
   String res;
   res.size = size + str_.size;
   res.string = new char[res.size + 1];

   int count = 0;
   for (int i = 0; i < size; i++)
   {
      res.string[count] = string[i];
      count++;
   }
   for (int i = 0; i < str_.size; i++)
   {
      res.string[count] = str_.string[i];
      count++;
   }
   res.string[res.size] = '\0';
   *this = res;
   return *this;
}

bool String::IsEmpty()
{
   return (string == nullptr);
}

int String::Lenght()
{
   return size;
}

char& String::At(int index_)
{
   if ((index_ < 0) || (index_ >= size))
   {
      cout << "This position is not in the array.";
   }
   return string[index_];
}

char& String::Front()
{
   return string[0];
}

char& String::Back()
{
   return string[size - 1];
}

char& String::operator[](int index_)
{
   if ((index_ < 0) || (index_ >= size))
   {
      cout << "This position is not in the array.";
      exit(1);
   }
   return string[index_];
}

void String::Clear()
{
   size = 0;
   delete[] string;
   string = nullptr;
}

void String::Insert(char c_, int pos_)
{
   // Проверка валидности позиции
   if (pos_ < 0 || pos_ > size) {
      cout << "This position is not in the array.";
      exit(1);
   }

   // Расширение буфера данных
   char* new_data = new char[size + 1];
   for (int i = 0; i < pos_; i++) {
      new_data[i] = string[i];
   }
   new_data[pos_] = c_;
   for (int i = pos_; i < size; i++) {
      new_data[i + 1] = string[i];
   }

   // Очистка памяти и обновление данных
   delete[] string;
   string = new_data;
   size++;
}

void String::Erase(int pos_)
{
   if (pos_ < 0 || pos_ >= size) {
      cout << "This position is not in the array.";
      exit(1);
   }

   // Создание нового буфера данных
   char* newString = new char[size - 1];
   for (int i = 0; i < pos_; i++) {
      newString[i] = string[i];
   }
   for (int i = pos_ + 1; i < size; i++) {
      newString[i - 1] = string[i];
   }

   // Очистка памяти и обновление данных
   delete[] string;
   string = newString;
   size--;
}

void String::Swap(String str_)
{
   String tmp = *this;
   *this = str_;
   str_ = tmp;
   tmp.Clear();
}

char* String::C_str()
{
   char* res = new char[size + 1];
   for (int i = 0; i < size; i++)
   {
      res[i] = string[i];
   }
   res[size] = '\0';
   return res;
}

void String::Copy(const String& str_)
{
   if ((str_.size == 0) || (str_.string == nullptr))
   {
      size = 0;
      string = nullptr;
      return;
   }

   size = str_.size;
   string = new char[size + 1];
   for (int i = 0; i < size; i++)
   {
      string[i] = str_.string[i];
   }
   string[size] = '\0';
}

ostream& operator<<(ostream& stream, const String& str_)
{
   for (int i = 0; i < str_.size; i++)
      stream << str_.string[i];
   return stream;
}

istream& operator>>(std::istream& stream, String& str_)
{
   char* buffer = new char[1024];
   stream.getline(buffer, 1024);
   int sizeBuffer = 0;
   while (buffer[sizeBuffer])
   {
      ++sizeBuffer;
   }
   str_.size = sizeBuffer;
   str_.string = new char[sizeBuffer + 1];
   for (size_t i = 0; i < sizeBuffer; i++)
   {
      str_.string[i] = buffer[i];
   }
   str_.string[sizeBuffer] = '\0';
   delete[] buffer;
   return stream;

}
