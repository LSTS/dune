#ifndef HELPER_HPP
#define HELPER_HPP

#include <string>
#include <cctype>
#include <regex>

namespace Helper {

    //True if the string contains just digitsCHANGE THAT using ::isdigit
    inline bool containsJustDigits(const std::string& s) {
        static const std::regex number_regex(R"(^[+-]?(\d+(\.\d*)?|\.\d+)([eE][+-]?\d+)?$)");
        return std::regex_match(s, number_regex);
    }

    //True if default value
    template <typename T>
    inline bool is_default_value(const T& value) {
        return value == static_cast<T>(0);
    }

    // deafult for float
    template <>
    inline bool is_default_value<float>(const float& value) {
        return std::fabs(value) < 1e-6f;
    }

    // deafult for double
    template <>
    inline bool is_default_value<double>(const double& value) {
        return std::fabs(value) < 1e-9;
    }

    // deafult for string
    template <>
    inline bool is_default_value<std::string>(const std::string& value) {
        return value.empty();
    }

} // namespace Helper

#endif // HELPER_HPP
