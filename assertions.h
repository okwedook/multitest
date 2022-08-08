#pragma once

#include <string>

template<class T, class U>
void AssertEqual(const T& a, const U& b, const std::string& hint);

#define ASSERT_EQUAL(a, b)                                                        \
    AssertEqual(a, b,                                                             \
        std::string(#a) + " != " + std::string(#b)                                \
        + " at " + std::string(__FILE__) + ":" + std::to_string(__LINE__));
