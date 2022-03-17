#include <ctime>
#include <string>
#include <iostream>
#include <unordered_map>
#include "jianzhi-offer-004.only1/code/main.h"

int Solution::singleNumber(vector<int>& nums) {
  int ans = 0;
  std::unordered_map<int, int> freq;
  for (int num: nums) {
    freq[num]++;
  }

  for (auto [num, cnt]: freq) {
    if (cnt == 1) {
      return num;
    }
  }
  
  return ans;
}

int main(int argc, char** argv) {
  Solution solution;
  vector<int> nums = {0, 1, 0, 1, 100};
  std::cout << solution.singleNumber(nums) << std::endl;
  return 0;
}
