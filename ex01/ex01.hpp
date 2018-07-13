/* This is my copyright.*//* Watson */
/* Watson */
#ifndef EX01_HPP_/* Watson */
#define EX01_HPP_/* Watson */
/* Watson */
#include <cstring>/* Watson */
/* Watson */
template <typename T>/* Watson */
int compare(T const &a, T const &b)/* Watson */
{/* Watson */
	if (a == b)/* Watson */
		return 0;/* Watson */
	return a < b ? -1 : 1;/* Watson */
}/* Watson */
/* Watson */
int compare(const char *a, const char *b)/* Watson */
{/* Watson */
	int res = std::strcmp(a, b);/* Watson */
	if (res > 0)/* Watson */
		return 1;/* Watson */
	else if (res < 0)/* Watson */
		return -1;/* Watson */
	else/* Watson */
		return 0;/* Watson */
}/* Watson */
/* Watson */
#endif /* Watson */
/* My own copyright */
