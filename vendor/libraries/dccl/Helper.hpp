#ifndef HELPER_HPP
#define HELPER_HPP

#include <string>
#include <cctype>
#include <regex>

namespace Helper {

    //True if the string contains just digitsCHANGE THAT using ::isdigit
    inline bool containsJustDigits(const std::string& s) {
        //phone number check
        static const std::regex phone_regex(R"(^\+\d{12}$)");
        if (std::regex_match(s, phone_regex)) {
            return false;
        }

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

    // Split a string with ";" and "," in its items
    inline std::vector<std::string> getItems(const std::string& imc)
    {
        std::string normalized = imc;

        // convert ',' to ';'
        std::replace(normalized.begin(), normalized.end(), ',', ';');

        std::stringstream ss(normalized);
        std::string item;
        std::vector<std::string> items;

        while (std::getline(ss, item, ';'))
        {
            //skip empty items
            if (!item.empty())
                items.push_back(item);
        }

        return items;
    }


} // namespace Helper

#endif // HELPER_HPP
