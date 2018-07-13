/* This is my copyright.*//* Watson */
/* Watson */
#ifndef EX06_HPP_/* Watson */
#define EX06_HPP_/* Watson */
/* Watson */
#include <sstream>/* Watson */
#include <string>/* Watson */
#include <typeinfo>/* Watson */
/* Watson */
template <typename T>/* Watson */
static std::string toString(T const &value __attribute__((unused)))/* Watson */
{/* Watson */
	std::ostringstream oss;/* Watson */
	oss << "[???]";/* Watson */
	return oss.str();/* Watson */
}/* Watson */
/* Watson */
static std::string toString(int const &value) __attribute__((unused));/* Watson */
static std::string toString(float const &value) __attribute__((unused));/* Watson */
static std::string toString(std::string const &value) __attribute__((unused));/* Watson */
/* Watson */
static std::string toString(int const &value)/* Watson */
{/* Watson */
	std::ostringstream oss;/* Watson */
	oss << "[int:" << value << "]";/* Watson */
	return oss.str();/* Watson */
}/* Watson */
/* Watson */
static std::string toString(float const &value)/* Watson */
{/* Watson */
	std::ostringstream oss;/* Watson */
	oss << "[float:" << value << "f]";/* Watson */
	return oss.str();/* Watson */
}/* Watson */
/* Watson */
static std::string toString(std::string const &value)/* Watson */
{/* Watson */
	std::ostringstream oss;/* Watson */
	oss << "[string:\"" << value << "\"]";/* Watson */
	return oss.str();/* Watson */
}/* Watson */
/* Watson */
template <typename T, typename U = T>/* Watson */
struct Tuple {/* Watson */
	T a;/* Watson */
	U b;/* Watson */
/* Watson */
	std::string toString() const/* Watson */
	{/* Watson */
		std::ostringstream oss;/* Watson */
		oss << "[TUPLE " << ::toString(a) <</* Watson */
			" " << ::toString(b) << "]";/* Watson */
		return oss.str();/* Watson */
	}/* Watson */
};/* Watson */
/* Watson */
#endif /* Watson */
/* My own copyright */
