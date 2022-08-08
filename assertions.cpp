#include <string>

#include "assertions.h"
#include "exceptions.h"
#include "pretty_printer.h"

template<class T, class U>
void AssertEqual(const T& a, const U& b, const std::string& hint) {
    if (!(a == b)) {
        throw AssertionError(std::to_string(a) + " != " + std::to_string(b) + ", " + hint);
    }
}