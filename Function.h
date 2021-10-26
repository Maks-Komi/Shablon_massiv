#pragma once

template <typename T>
class Massiv {
    T* values = nullptr;
    unsigned int size;
public:
    Massiv(unsigned int size = 1) : size(size) {
        if (size) {
            values = new T[size];
        }
    }
	/*~Massiv();
	Massiv(int);
	Massiv(const Massiv<T> & other);
	int Size() const;
	Massiv<T> operator = (const Massiv<T>& other);
	Massiv<int> operator + (const Massiv<int>& other) const;
	Massiv<char> operator + (const Massiv<char>& other) const;
	Massiv<T>& operator [] (int);

	template <typename T>
	friend ostream& operator << (ostream& out, Massiv<T> a);*/
};