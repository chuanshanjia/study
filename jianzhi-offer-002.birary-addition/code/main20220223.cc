#include <ctime>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
      string ans;
      int a_index_end = a.size() - 1, b_index_end = b.size() - 1;
      int carry = 0;
      while (a_index_end >= 0 || b_index_end >= 0) {
        int x = a_index_end >= 0 ? a[a_index_end] - '0' : 0;
        int y = b_index_end >= 0 ? b[b_index_end] - '0' : 0;

        int sum = x + y + carry;

        ans.push_back('0' + sum % 2);

        carry = sum / 2;
        a_index_end--;
        b_index_end--;
      }
      
      if (carry) {
        ans.push_back('0' + carry);

      }
      reverse(ans.begin(), ans.end());
      return ans;
    }
};

int main(int argc, char** argv) {
  std::string a = "1010", b = "1011";
  if (argc > 2) {
    a = argv[1];
    b = argv[2];
  }
  /*cstring t;
  t.push_back('0' + 1);
  std::cout << t << std::endl; // output:1
  return 0;*/
  Solution solution;
  std::cout << solution.addBinary(a, b) << std::endl;
  return 0;
}
