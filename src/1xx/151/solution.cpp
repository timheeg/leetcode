#include <151/solution.h>

#include <algorithm>
#include <numeric>

std::string Solution::reverseWords(std::string s) {
  // Tokenize the string into words
  std::vector<std::string> words{};
  auto start{-1};
  for (auto i = 0u; i < s.size(); ++i) {
    if (s.at(i) == ' ') {
      if (start != -1) {
        words.push_back(s.substr(start, i - start));
        start = -1;
      }
      continue;
    }
    if (start == -1) start = i;
  }
  if (start != -1) words.push_back(s.substr(start, s.size()));

  // Concat the words in reverse order
  auto reversed =
      std::accumulate(std::next(std::rbegin(words)), std::rend(words),
                      words.back(),  // initial value
                      [&separator = " "](auto result, const auto& value) {
                        return result + separator + value;
                      });

  return reversed;
}
