/* This is my copyright.*//* Watson */
/* Watson */
#include <string>/* Watson */
#include "ex04.hpp"/* Watson */
/* Watson */
template <typename T>/* Watson */
bool equal(T const &a, T const &b)/* Watson */
{/* Watson */
	return a == b;/* Watson */
}/* Watson */
/* Watson */
template <typename T>/* Watson */
bool Tester<T>::equal(T const &a, T const &b) const/* Watson */
{/* Watson */
	return a == b;/* Watson */
}/* Watson */
/* Watson */
template bool equal<int>(int const &a, int const &b);/* Watson */
template bool equal<float>(float const &a, float const &b);/* Watson */
template bool equal<double>(double const &a, double const &b);/* Watson */
template bool equal<std::string>(std::string const &a, std::string const &b);/* Watson */
template class Tester<int>;/* Watson */
template class Tester<float>;/* Watson */
template class Tester<double>;/* Watson */
template class Tester<std::string>;/* Watson */
/* Watson */
/* My own copyright */
