#include <6/solution.h>

#include <numeric>
#include <vector>

//
// Intuition: index % rows = row
// Add each char to a row string for each row
// then concat all the row strings
//

std::string Solution::convert(std::string s, int num_rows) {
  if (num_rows == 1) return s;
  if (s.size() < static_cast<std::size_t>(num_rows)) return s;

  // length of a zigzag
  auto zag_rows = 2 * num_rows - 2;

  std::vector<std::string> row_strings(num_rows);
  for (auto i = 0u; i < s.size(); ++i) {
    if (i % zag_rows >= static_cast<std::size_t>(num_rows)) {  // zagging
      auto row = zag_rows - (i % zag_rows);
      row_strings[row] += s.at(i);
    } else {
      row_strings[i % zag_rows] += s.at(i);
    }
  }
  return std::accumulate(std::begin(row_strings), std::end(row_strings),
                         std::string{});
}
