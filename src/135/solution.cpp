#include <135/solution.h>

#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <unordered_map>
#include <vector>

//
// Intuition, each child gets one candy. If the priority of the child increased
// then that child gets an extra candy. If the priority of the child decreased
// then the previous child gets an extra candy. This is not sufficient to solve
// the problem at all.
//
// Need to know the unique set of ratings values, so you know the highest rating
// needs to get the number of candies equal to the number of ratings. Then each
// lower priority gets fewer. Create a mapping of ratings values to the max
// amount of candy that rating could potentially earn.
//

namespace {
bool debug{true};

void print(const std::set<int>& set) {
  std::for_each(std::begin(set), std::end(set),
                [](const auto& item) { std::cout << item << ", "; });
  std::cout << "\n";
}

void print(const std::unordered_map<int, int>& map) {
  std::for_each(std::begin(map), std::end(map), [](const auto& item) {
    std::cout << "{" << item.first << "," << item.second << "}, ";
  });
  std::cout << "\n";
}

void print(const std::vector<int>& list) {
  std::for_each(std::begin(list), std::end(list),
                [](const auto& item) { std::cout << item << ", "; });
  std::cout << "\n";
}

namespace map_ratings {
[[maybe_unused]] int candy(std::vector<int>& ratings) {
  if (ratings.empty()) return 0;
  if (ratings.size() == 1) return 1;

  // Find the unique set of ratings values.
  std::set<int> unique_ratings{std::begin(ratings), std::end(ratings)};

  if (debug) std::cout << "Unique ratings: ";
  if (debug) print(unique_ratings);

  std::unordered_map<int, int> candy_by_rating{};
  auto count{1};
  for (auto it = std::begin(unique_ratings); it != std::end(unique_ratings);
       ++it) {
    candy_by_rating[*it] = count++;
  }
  if (debug) print(candy_by_rating);

  auto total_candies{0};
  for (int i = ratings.size() - 1; i >= 0; --i) {
    if (i == 0) {
      if (ratings[i] > ratings[i + 1]) {
        total_candies += candy_by_rating.at(ratings[i + 1]) + 1;
        if (debug)
          std::cout << "first > next(" << ratings[i + 1] << ")["
                    << candy_by_rating.at(ratings[i + 1])
                    << "] +1 = " << total_candies << "\n";
      } else {
        total_candies += 1;
        if (debug) std::cout << "first <= +1 = " << total_candies << "\n";
      }
    } else if (ratings[i - 1] < ratings[i]) {
      total_candies += candy_by_rating.at(ratings[i - 1]) + 1;
      if (debug)
        std::cout << "< prev(" << ratings[i - 1] << ")["
                  << candy_by_rating.at(ratings[i - 1])
                  << "] +1 = " << total_candies << "\n";
    } else if (ratings[i - 1] == ratings[i]) {
      total_candies += 1;
      if (debug) std::cout << "== +1 = " << total_candies << "\n";
    } else if (ratings[i - 1] > ratings[i]) {
      total_candies += candy_by_rating.at(ratings[i]);
      if (debug)
        std::cout << "> at(" << ratings[i] << ")["
                  << candy_by_rating.at(ratings[i]) << "] = " << total_candies
                  << "\n";
    }
  }

  return total_candies;
}
}  // namespace map_ratings
namespace delta {
[[maybe_unused]] int candy(std::vector<int>& ratings) {
  if (ratings.empty()) return 0;
  if (ratings.size() == 1) return 1;

  auto total_candies{0};

  auto curr{0};
  for (auto i = 0u; i < ratings.size() - 1; ++i) {
    if (ratings[i] < ratings[i + 1]) {
      total_candies += std::abs(curr) + 1;
      if (curr < 0)
        curr = 1;
      else
        curr++;
    } else if (ratings[i] > ratings[i + 1]) {
      total_candies += std::abs(curr) + 1;
      if (curr > 0)
        curr = 0;
      else
        curr--;
    } else {
      total_candies += std::abs(curr) + 1;
      curr = 0;
    }
  }
  total_candies += std::abs(curr) + 1;

  return total_candies;
}
}  // namespace delta
namespace traverse {
[[maybe_unused]] int candy(std::vector<int>& ratings) {
  if (ratings.empty()) return 0;
  if (ratings.size() == 1) return 1;

  std::vector<int> award(ratings.size(), 1);
  for (auto i = 0u; i < ratings.size() - 1; ++i) {
    if (ratings[i] < ratings[i + 1]) {
      award[i + 1] = std::max(award[i] + 1, award[i + 1]);
    }
  }
  for (auto i = ratings.size() - 1; i > 0; --i) {
    if (ratings[i - 1] > ratings[i]) {
      award[i - 1] = std::max(award[i] + 1, award[i - 1]);
    }
  }
  if (debug) std::cout << "Award: ";
  if (debug) print(award);

  return std::reduce(std::cbegin(award), std::cend(award));
}
}  // namespace traverse
}  // namespace

int Solution::candy(std::vector<int>& ratings) {
#if 0
  auto candy = map_ratings::candy;
  auto candy = delta::candy;
#else
  auto candy = traverse::candy;
#endif
  return candy(ratings);
}
