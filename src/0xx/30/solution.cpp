#include <30/solution.h>

#include <algorithm>
#include <iostream>
#include <numeric>
#include <ranges>
#include <string>
#include <string_view>
#include <unordered_map>
#include <vector>

//
// Intuition:
// Use Sliding Window Algorithm to find the substring permutations.
//
// However, you can't just find any permutation, it is constrained to be the
// defined words, not jumbles of the letters of the words.
//
// If you could hash the permutations, you could just look up a simple window
// hash value. But generating all permutations up front is O(n!), so that's out.
//
// So abstract the SWA such that you aren't just dealing with individual letters
// but rather entities that are words. And since the problem stated that all
// words are of equal length, then you simply slide the window 3 places instead
// of 1 at a time.
//

//
// Old, incorrect code saved for review.
//
// I mistakenly applied the constraint that all words are the same size to also
// imply that all contents of the string s contained words of the same length
// as well. I received a failed test case which demonstrated that the string
// was arbitrary and only the words were the same size.
//
std::vector<int> assuming_s_also_same_size_words(
    std::string s, std::vector<std::string>& words) {
  auto start{0u};
  auto increment{std::size(words[0])};
  std::ranges::sort(words);
  std::vector<int> matches{};
  std::vector<std::string> window_words{};
  for (auto end{0u}; end < std::size(s); end += increment) {
    window_words.emplace_back(s.substr(end, increment));
    if (std::size(window_words) < std::size(words)) continue;

    while (std::size(window_words) > std::size(words)) {
      window_words.erase(std::begin(window_words));
      start += increment;
    }

    auto sorted_window = window_words;
    std::ranges::sort(sorted_window);
    if (sorted_window == words) {
      matches.push_back(start);
    }
  }
  return matches;
}

//
// Previous permutation check was naive and passed with any permutation of
// letters regardless of words. Attempting to check for words is brute force
// searching through all words and taking too long to execute. There is an
// insight needed to reduce the search space that I'm missing.
//
std::vector<int> Solution::findSubstring(std::string s,
                                         std::vector<std::string>& words) {
  auto start{0u};
  auto sorted_words =
      std::accumulate(words.begin(), words.end(), std::string(""));
  std::sort(sorted_words.begin(), sorted_words.end());
  std::vector<int> matches{};
  std::string window{};
  for (auto end{0u}; end < std::size(s); ++end) {
    window += s[end];
    if (std::size(window) < std::size(sorted_words)) continue;

    while (std::size(window) > std::size(sorted_words)) {
      window.erase(std::begin(window));
      start += 1;
    }



    // Check if the window contains a permutation
    auto sorted_window = window;
    std::ranges::sort(sorted_window);
    if (sorted_window == sorted_words) {
      const auto increment = std::size(words[0]);
      if (increment == 1) {
        matches.push_back(start);
        continue;
      }
      // Check if it contains the actual words, and not a non-word permutation
      auto is_perm = true;
      std::cout << "Check window=" << window << "\n";
      auto w = words;
      for (auto i = 0u; i < std::size(window); i += increment) {
        auto word = window.substr(i, increment);
        std::cout << "i=" << i << ", increment=" << increment
                  << ", find word=" << word;
        auto it = std::find(w.begin(), w.end(), word);
        if (it == w.end()) {
          std::cout << ", not found\n";
          is_perm = false;
          break;
        }
        std::cout << ", found\n";
        w.erase(it);
      }
      if (is_perm) {
        matches.push_back(start);
      }
    }
  }
  return matches;
}
