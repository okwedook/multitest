#include <string>

#include "pretty_printer.h"

template<class T>
std::string pretty_print(const T& x) {
	return std::to_string(x);
}