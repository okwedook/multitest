#pragma once

#include <stdexcept>
#include <string>

class AssertionError : public std::runtime_error {
  public:
    AssertionError(const std::string &_message) : std::runtime_error(_message) {}
};