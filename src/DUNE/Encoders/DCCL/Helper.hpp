#ifndef DUNE_ENCODERS_DCCL_HELPER_HPP_INCLUDED_
#define DUNE_ENCODERS_DCCL_HELPER_HPP_INCLUDED_


#include <string>
#include <cctype>
#include <regex>

namespace DUNE
{
  namespace Encoders
  {
    namespace DCCL
    {
      namespace Helper
      {

        // Finds numbers in a string
        inline std::string findDigits(const std::string& s) {
            std::string out;
            for (char c : s) {
                if (std::isdigit(c)) out += c;
            }
            return out;
        }

        // Finds letters in a string
        inline std::string findLetters(const std::string& s) {
            std::string out;
            for (char c : s) {
                if (std::isalpha(c)) out += c;
            }
            return out;
        }

        inline bool containsJustDigits(const std::string& s) {
            static const std::regex number_regex(R"(^[+-]?(\d+(\.\d*)?|\.\d+)([eE][+-]?\d+)?$)");
            return std::regex_match(s, number_regex);
        }

      } // namespace Helper
    } // namespace DCCL
  } // namespace Encoders
} // namespace DUNE

#endif // HELPER_HPP
