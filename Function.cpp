#include"Function.h"



//template <typename T>
//Massiv<T>::~Massiv() {
//	if (Arr)
//		delete[] Arr;
//}

//template <typename T>
//Massiv<T>::Massiv(const Massiv<T> & other) {
//	size = other.size;
//	values = nullptr;
//	if (size != 0) {
//		this->values = new T[size];
//	}
//	else
//		values = 0;
//	for (int i = 0; i < this->size; i++)
//	{
//		this->values[i] = other.values[i];
//	}
//}
//
//template <typename T>
//int Massiv<T>::Size() const {
//	return size;
//}
//
//template <typename T>
//Massiv<T>::Massiv(int size) {
//	this->size = size;
//	if (this->size != 0) {
//		values = new T[this->size];
//	}
//	else
//		values = 0;
//}
//
//template <typename T>
//Massiv<T> Massiv<T>::operator = (const Massiv<T>& other) {
//	size = other.size;
//	values = nullptr;
//	if (size != 0) {
//		this->values = new T[size];
//	}
//	else
//		values = 0;
//	this->values = new T[size];
//	for (int i = 0; i < this->size; i++)
//	{
//		this->values[i] = other.values[i];
//	}
//}
//
//
//template <typename T>
//Massiv<int> Massiv<T>::operator+ (const Massiv<int>& other) const {
//	Massiv<int> value_int[size];
//	for (int i = 0; i < size; i++) {
//		value_int[i] = values[i] + other.values[i];
//	}
//	return value_int;
//}
//
//template <typename T>
//Massiv<char> Massiv<T>::operator+ (const Massiv<char>& other) const {
//	Massiv<char> value_char(this->size + other.size + 1);
//	//value_char = new char[value_char.size];
//	int i = 0;
//	for (; i < size; i++) {
//		value_char.values[i] = this->values[i];
//	}
//	for (int j = 0; j < other.size; j++, i++) {
//		value_char.values[i] = other.values[j];
//	}
//	value_char.values[i] = '\0';
//	return value_char;
//}
//
//template <typename T>
//Massiv<T>& Massiv<T>::operator[] (int i) {
//	return values[i];
//}
//
//template <typename T>
//ostream& operator << (ostream& out, Massiv<T> a) {
//	for (int i = 0; i < a.size; i++)
//	{
//		out << a[i] << " ";
//	}
//	return out;
//}