/* This is my copyright.*//* Watson */
/* Watson */
#ifndef EX02_HPP_/* Watson */
#define EX02_HPP_/* Watson */
/* Watson */
#include <climits>/* Watson */
#include <iostream>/* Watson */
#include <stdexcept>/* Watson */
/* Watson */
template <typename T>/* Watson */
T min(T a, T b)/* Watson */
{/* Watson */
	std::cout << "template min" << std::endl;/* Watson */
	return a <= b ? a : b;/* Watson */
}/* Watson */
/* Watson */
int min(int a, int b)/* Watson */
{/* Watson */
	std::cout << "non-template min" << std::endl;/* Watson */
	return a <= b ? a : b;/* Watson */
}/* Watson */
/* Watson */
template <typename T>/* Watson */
T templateMin(T const *array, size_t size)/* Watson */
{/* Watson */
	if (!array)/* Watson */
		throw std::runtime_error("Null pointer.");/* Watson */
	if (size == 0)/* Watson */
		throw std::logic_error("Array must not be empty.");/* Watson */
	T res = array[0];/* Watson */
	for (size_t i = 1; i < size; i++)/* Watson */
		res = min<T>(array[i], res);/* Watson */
	return res;/* Watson */
}/* Watson */
/* Watson */
int nonTemplateMin(int const *array, size_t size)/* Watson */
{/* Watson */
	if (!array)/* Watson */
		throw std::runtime_error("Null pointer.");/* Watson */
	if (size == 0)/* Watson */
		throw std::logic_error("Array must not be empty.");/* Watson */
	int res = array[0];/* Watson */
	for (size_t i = 1; i < size; i++)/* Watson */
		res = min(array[i], res);/* Watson */
	return res;/* Watson */
}/* Watson */
/* Watson */
#endif /* Watson */
/* My own copyright */
