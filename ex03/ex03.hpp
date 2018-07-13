/* This is my copyright.*//* Watson */
/* Watson */
#ifndef EX03_HPP_/* Watson */
#define EX03_HPP_/* Watson */
/* Watson */
#include <iostream>/* Watson */
#include <stdexcept>/* Watson */
/* Watson */
template <typename T>/* Watson */
void foreach(T const *array, void (&func)(const T &elem), size_t size)/* Watson */
{/* Watson */
	if (!array)/* Watson */
		throw std::runtime_error("Null pointer.");/* Watson */
	for (size_t i = 0; i < size; i++)/* Watson */
		func(array[i]);/* Watson */
}/* Watson */
/* Watson */
template <typename T>/* Watson */
void print(const T &elem)/* Watson */
{/* Watson */
	std::cout << elem << std::endl;/* Watson */
}/* Watson */
/* Watson */
#endif /* Watson */
/* My own copyright */
