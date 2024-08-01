#include <68/solution.h>

//
// Intuition:
// Walk the list of words. Add the length of each word that will fit within max
// width. Once you have that set of words, calculate the remaining whitespace
// needed, then construct the newly justified string and append it to the result
// list. If you can use the last word from the input list, then you're on the
// last line.
//

std::string build_last_line(std::vector<std::string>& words, int max_width,
                            int i, int j) {
  if (i == j) {
    return words[i] + std::string(max_width - words[i].size(), ' ');
  }
  auto result = words[i++];
  for (; i <= j; ++i) {
    result += " " + words[i];
  }
  result += std::string(max_width - result.size(), ' ');
  return result;
}

std::string build_line(std::vector<std::string>& words, int max_width, int i,
                       int j, int word_length) {
  if (static_cast<std::size_t>(j + 1) == words.size()) {
    return build_last_line(words, max_width, i, j);
  }
  if (i == j) {
    return words[i] + std::string(max_width - words[i].size(), ' ');
  }
  auto num_spaces{j - i};
  auto total_ws{max_width - word_length};
  auto ws_space = total_ws / num_spaces;
  auto result = words[i];
  for (auto start = i; i < j;) {
    auto ws{ws_space};
    if (total_ws % num_spaces != 0 && i - start < (total_ws % num_spaces)) ws++;
    result += std::string(ws, ' ');
    result += words[++i];
  }
  return result;
}

std::vector<std::string> Solution::fullJustify(std::vector<std::string>& words,
                                               int max_width) {
  std::vector<std::string> result{};

  auto i = 0u, j = i;
  while (i < words.size()) {
    auto word_length{0};
    if (j == i) {
      word_length += words[j].size();
    }
    while (j + 1 < words.size()) {
      if (word_length + words[j + 1].size() + (j - i + 1) >
          static_cast<std::size_t>(max_width)) {
        break;
      }
      j++;
      word_length += words[j].size();
    }
    // build sentence from i..j
    result.push_back(build_line(words, max_width, i, j, word_length));
    i = j + 1;
    j = i;
  }

  return result;
}
