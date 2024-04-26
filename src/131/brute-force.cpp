#include <iostream>
#include <vector>

namespace brute_force {
int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
  // Number of stops along the circuit
  const auto n = gas.size();

  // Loop through each possible starting location
  for (auto i = 0u; i < gas.size(); ++i) {
    if (gas[i] < cost[i]) {
      std::cout << "Location " << i << " doesn't have enough gas to start."
                << std::endl;
      continue;
    }

    // Fill gas tank and attempt this circuit
    auto tank{0};
    for (auto j = 0u; j < gas.size(); ++j) {
      tank += gas[(i + j) % n];
      tank -= cost[(i + j) % n];
      if (tank < 0) {
        std::cout << "Ran out of gas. ⛽ Cannot make it to next stop "
                  << ((i + j) % n) + 1 << std::endl;
        break;
      }
    }
    if (tank >= 0) {
      std::cout << "Made it!! Starting from location " << i << " with " << tank
                << " gallons of gas left!" << std::endl;
      return i;
    }
  }
  std::cout << "No possible circuits found. 😢" << std::endl;
  return -1;
}
}  // namespace brute_force
