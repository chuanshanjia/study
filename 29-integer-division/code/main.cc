/*
 * @lc app=leetcode.cn id=29 lang=cpp
 *
 * [29] 两数相除
 */

#include <string>
#include <iostream>
#include <vector>

// @lc code=start
class Solution {
public:
  int divide(int dividend, int divisor) {
    // 除法结果溢出，返回 2^31 - 1, 32位无符号整数（有提示）
    if (dividend == INT32_MIN && divisor == -1) {
    return INT32_MAX;
    }

    //  ****** 符号判断: 异或，相同为0，不同为1 ——(这个地方用的好)
    int sign = (dividend > 0) ^ (divisor > 0) ? -1 : 1;

    //  取绝对值
    long absolute_deividend = labs(dividend), absolute_divisor = labs(divisor), quotient = 0;

    // 贪心求 b 小于等于 a 的最大倍数, a = k * b
    while (absolute_deividend >= absolute_divisor) { // *设计点思考
        long absolute_divisor_t = absolute_divisor, quotient_t = 1;
        //  *设计点思考
        while (absolute_deividend >= absolute_divisor_t << 1) {
            absolute_divisor_t <<= 1;
            quotient_t <<= 1;
        }
        absolute_deividend -= absolute_divisor_t;
        quotient += quotient_t;
    }

    return sign == -1 ? -quotient : quotient;
  }
};

int main(int argc, char **argv) {
  int32_t dividend = 10;
  int32_t divisor = 3;
  if (argc > 1) {
    //  学习： 类型强转
    dividend = static_cast<int32_t>(std::stoul(argv[1]));
  }
  if (argc > 2) {
    divisor = static_cast<int32_t>(std::stoul(argv[2]));
  }
  Solution solution;
  int32_t result = solution.divide(dividend, divisor);
  std::cout << "dividend:" << dividend << ",divisor:" << divisor << ",result:" << result << std::endl;
  return 0;
}
