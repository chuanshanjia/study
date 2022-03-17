#include <vector>
#include "gtest/gtest.h"
#include "206-singly-linked/code/main.h"

//  初始化链表和打印链表
TEST(SolutionTest, initPrint) {
  std::vector<int> arr = {1, 2, 3, 4, 5};
  ListNode* head = new ListNode();
  ListNode* cur = head;
  for (int i = 0; i < arr.size(); i++) {
    ListNode* node = new ListNode(arr[i]);
    cur->next = node;
    cur = node;
  }
  

  int i = 0;
  while (head != nullptr) {
    i++;
    std::cout << "singly linkend inverse after:" << head->val << std::endl;
    head = head->next;
  }
}


//  初始化链表和打印链表
TEST(SolutionTest, reverseList) {
  std::vector<int> arr = {1, 2, 3, 4, 5, 6};
  ListNode* head = new ListNode();
  ListNode* cur = head;
  for (int i = 0; i < arr.size(); i++) {
    ListNode* node = new ListNode(arr[i]);
    cur->next = node;
    cur = node;
  }
  
  Solution solution;
  ListNode* reverse = solution.reverseList(head);

  int i = 0;
  while (reverse != nullptr) {
    i++;
    std::cout << "singly linkend inverse after:" << reverse->val << std::endl;
    reverse = reverse->next;
  }
}