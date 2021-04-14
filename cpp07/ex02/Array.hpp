#pragma once

#include <cstddef>
#include <stdexcept>
#include <ostream>

template<class T>
class Array {
	public:
		Array(): _array(NULL), _n(0) {}
		Array(unsigned int n): _n(n){
			_array = new T[n];
		}
		Array(const Array<T> &other) {
			*this = other;
		}
		~Array() {
			delete[] _array;
		}
		Array & operator=(const Array<T> &other){
			if (_array)
				delete [] _array;
			_array = new T[other.size()];
			_n = other._n;
			for (size_t i = 0; i < other._n; i++)
				_array[i] = other._array[i];
			return *this;
		}
		T & operator[](unsigned int pos) {
			if (pos > _n - 1)
				throw std::out_of_range("Out of bound index...........");
			return _array[pos];
		}

		unsigned int size() const{
			return _n;
		}
	private:
		T *_array;
		size_t	_n; 
};

template<typename T>
std::ostream & operator<<(std::ostream & os,  Array<T> &a){
	os << "{";
	for (size_t i = 0; i < a.size(); i++) {
		if (i)
			os << ", ";
		os << a[i];
	}
	os << "}";
	return os ;
}