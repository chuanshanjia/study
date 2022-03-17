#include <ctime>
#include <string>
#include <iostream>
#include "jianzhi-offer-003.topn-1total/code/main.h"

// Brian Kernighan 
int Solution::countX(int x) {
  int cnt = 0;
  while (x > 0) {
    // *** 学习： 每一次运转就把最右边的1抹掉
    x = x & (x - 1);
    cnt++;
  }
  return cnt;
}

vector<int> Solution::countBits(int n) {
  // *关注： 数量个数
  vector<int> ans(n + 1);

  for (int i = 0; i <= n; i++) {
    ans[i] = countX(i);
  }
  return ans;
}

int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  Solution solution;
  vector<int> vs = solution.countBits(10);
  for (int v : vs) {
    std::cout << v << ",";
  }
  std::cout << std::endl;
  return 0;
}
