#include <12/solution.h>

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

const std::unordered_map<Roman, std::string::value_type> values = {
    {Roman::I, 'I'}, {Roman::V, 'V'}, {Roman::X, 'X'}, {Roman::L, 'L'},
    {Roman::C, 'C'}, {Roman::D, 'D'}, {Roman::M, 'M'}};
}  // namespace

std::string Solution::intToRoman(int num) {
  assert(num > 0 && num < 5000);

  std::string value{""};

  auto k = num / 1000 % 10;
  if (k > 0) {
    value.append(std::string(k, 'M'));
  }

  auto h = num / 100 % 10;
  if (h > 0) {
    switch (h) {
      case 1:
      case 2:
      case 3:
        value.append(std::string(h, 'C'));
        break;
      case 4:
        value.append("CD");
        break;
      case 5:
        value.append("D");
        break;
      case 6:
      case 7:
      case 8:
        value.append("D" + std::string(h - 5, 'C'));
        break;
      case 9:
        value.append("CM");
        break;
    };
  }

  auto t = num / 10 % 10;
  if (t > 0) {
    switch (t) {
      case 1:
      case 2:
      case 3:
        value.append(std::string(t, 'X'));
        break;
      case 4:
        value.append("XL");
        break;
      case 5:
        value.append("L");
        break;
      case 6:
      case 7:
      case 8:
        value.append("L" + std::string(t - 5, 'X'));
        break;
      case 9:
        value.append("XC");
        break;
    }
  }

  auto o = num % 10;
  switch (o) {
    case 1:
    case 2:
    case 3:
      value.append(std::string(o, 'I'));
      break;
    case 4:
      value.append("IV");
      break;
    case 5:
      value.append("V");
      break;
    case 6:
    case 7:
    case 8:
      value.append("V" + std::string(o - 5, 'I'));
      break;
    case 9:
      value.append("IX");
      break;
  }

  return value;
}
