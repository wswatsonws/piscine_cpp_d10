/* This is my copyright.*/
/* Watson */
#ifndef EX05_HPP_/* Watson */
#define EX05_HPP_/* Watson */
/* Watson */
#include <iostream>/* Watson */
#include <stdexcept>/* Watson */
/* Watson */
template <typename T>/* Watson */
class array {/* Watson */
public:/* Watson */
	array() :/* Watson */
		_array(nullptr), _size(0)/* Watson */
	{/* Watson */
	}/* Watson */
/* Watson */
	array(size_t n) :/* Watson */
		_array(new T[n]), _size(n)/* Watson */
	{/* Watson */
		for (size_t i = 0; i < n; i++)/* Watson */
			this->_array[i] = T();/* Watson */
	}/* Watson */
/* Watson */
	array(array<T> const &other) :/* Watson */
		_array(new T[other._size]), _size(other._size)/* Watson */
	{/* Watson */
		for (size_t i = 0; i < this->_size; i++)/* Watson */
			this->_array[i] = other._array[i];/* Watson */
	}/* Watson */
/* Watson */
	~array()/* Watson */
	{/* Watson */
		delete[] this->_array;/* Watson */
	}/* Watson */
/* Watson */
	array<T> &operator=(array<T> const &other)/* Watson */
	{/* Watson */
		delete[] this->_array;/* Watson */
		this->_array = new T[other._size];/* Watson */
		this->_size = other._size;/* Watson */
		for (size_t i = 0; i < this->_size; i++)/* Watson */
			this->_array[i] = other._array[i];/* Watson */
		return (*this);/* Watson */
	}/* Watson */
/* Watson */
	T &operator[](size_t idx)/* Watson */
	{/* Watson */
		if (idx >= this->_size) {/* Watson */
			T *_new = new T[idx + 1];/* Watson */
			for (size_t i = 0; i < this->_size; i++)/* Watson */
				_new[i] = this->_array[i];/* Watson */
			delete[] this->_array;/* Watson */
			for (size_t i = this->_size; i < idx; i++)/* Watson */
				_new[i] = T();/* Watson */
			this->_array = _new;/* Watson */
			this->_size = idx + 1;/* Watson */
		}/* Watson */
		return (this->_array[idx]);/* Watson */
	}/* Watson */
/* Watson */
	T const &operator[](size_t idx) const/* Watson */
	{/* Watson */
		if (idx >= this->_size)/* Watson */
			throw std::out_of_range("Index out of range.");/* Watson */
		return (this->_array[idx]);/* Watson */
	}/* Watson */
/* Watson */
	size_t size() const/* Watson */
	{/* Watson */
		return (this->_size);/* Watson */
	}/* Watson */
/* Watson */
	void dump() const/* Watson */
	{/* Watson */
		std::cout << '[' << std::boolalpha;/* Watson */
		for (size_t i = 0; i < this->_size; i++) {/* Watson */
			std::cout << this->_array[i];/* Watson */
			if (i != this->_size - 1)/* Watson */
				std::cout << ", ";/* Watson */
		}/* Watson */
		std::cout << ']' << std::endl;/* Watson */
	}/* Watson */
/* Watson */
	template <typename U>/* Watson */
	array<U> convertTo(U (*func)(T const&))/* Watson */
	{/* Watson */
		array<U> res(this->_size);/* Watson */
		for (size_t i = 0; i < this->_size; i++)/* Watson */
			res[i] = func(this->_array[i]);/* Watson */
		return res;/* Watson */
	}/* Watson */
/* Watson */
private:/* Watson */
	T *_array;/* Watson */
	size_t _size;/* Watson */
};/* Watson */
/* Watson */
#endif /* Watson */
/* My own copyright */
