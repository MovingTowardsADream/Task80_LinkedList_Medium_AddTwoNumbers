#include <iostream>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int trsf = 0, sum;
        ListNode* result = new ListNode();
        ListNode* tmp = result;
        while (l1 != NULL || l2 != NULL || trsf != 0) {
            sum = ((l1 == NULL) ? 0 : l1->val) + ((l2 == NULL) ? 0 : l2->val) + trsf;
            tmp->next = new ListNode(sum % 10);
            tmp = tmp->next;
            trsf = sum / 10;
            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
        }
        return result->next;
    }
};
