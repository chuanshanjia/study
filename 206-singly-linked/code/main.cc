#include <ctime>
#include <string>
#include <iostream>
#include <unordered_map>
#include "206-singly-linked/code/main.h"

ListNode* Solution::reverseList(ListNode *head) {
  ListNode *cur = head;
  ListNode *prev = nullptr;
  while (cur != nullptr) {
    ListNode *next = cur->next;

    cur->next = prev;
    prev = cur;
    cur = next;
  }
  return prev;
}