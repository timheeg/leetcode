#include <131/solution.h>

#include <131/brute-force.cpp>
#include <131/skip-intermediates.cpp>

int Solution::canCompleteCircuit(std::vector<int>& gas,
                                 std::vector<int>& cost) {
#if 0
  return brute_force::canCompleteCircuit(gas, cost);
#else
  return skip_intermediates::canCompleteCircuit(gas, cost);
#endif
}
