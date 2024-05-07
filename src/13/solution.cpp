#include <13/solution.h>

#include <cassert>
#include <unordered_map>

namespace {
enum class Roman : int {
  I = 1,
  V = 5,
  X = 10,
  L = 50,
  C = 100,
  D = 500,
  M = 1000
};

const std::unordered_map<std::string::value_type, Roman> values = {
    {'I', Roman::I}, {'V', Roman::V}, {'X', Roman::X}, {'L', Roman::L},
    {'C', Roman::C}, {'D', Roman::D}, {'M', Roman::M}};
}  // namespace

int Solution::romanToInt(std::string s) {
  assert(not s.empty());

  if (s.size() == 1)
    return static_cast<std::underlying_type<Roman>::type>(values.at(s.at(0)));

  auto value{0};
  for (auto i = 0u; i < s.size(); ++i) {
    auto curr =
        static_cast<std::underlying_type<Roman>::type>(values.at(s.at(i)));
    if (i + 1 == s.size()) {
      value += curr;
      break;
    }
    auto next =
        static_cast<std::underlying_type<Roman>::type>(values.at(s.at(i + 1)));
    if (next > curr) {
      value += next - curr;
      ++i;
    } else {
      value += curr;
    }
  }

  return value;
}
