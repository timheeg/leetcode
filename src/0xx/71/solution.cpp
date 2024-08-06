#include <71/solution.h>

#include <numeric>
#include <string>
#include <vector>

//
// Intuition:
// Use a stack to keep track of the valid path components
//

std::string Solution::simplifyPath(std::string path) {
  if (path.front() != '/') return "";

  std::vector<std::string> result{};

  const std::string delim{"/"};
  std::string::size_type pos{0u};
  while ((pos = path.find(delim)) != std::string::npos) {
    if (pos == 0) {
      path.erase(0, 1);
      continue;
    }
    auto token = path.substr(0, pos);
    path.erase(0, pos + std::size(delim));
    if (token.empty() || token == ".") {
      continue;
    }
    if (token == "..") {
      if (not result.empty()) result.pop_back();
      continue;
    }
    result.push_back(token);
  }
  if (not path.empty() && path != ".") {
    if (path == "..") {
      if (not result.empty()) result.pop_back();
    } else
      result.push_back(path);
  }

  std::string absolute{""};
  for (auto p : result) {
    absolute += "/" + p;
  }
  if (absolute.empty()) absolute = "/";
  return absolute;
}
