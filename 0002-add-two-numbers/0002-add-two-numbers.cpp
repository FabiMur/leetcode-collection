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
    ListNode* addTwoNumbersAux(ListNode* l1, ListNode* l2, ListNode* l3, int carry) {
        if(l1 != nullptr && l2 != nullptr) {
            l3 = new ListNode();
            l3->val = (l1->val + l2->val + carry) % 10;
            carry = (l1->val + l2->val + carry) / 10;
            l3->next = addTwoNumbersAux(l1->next, l2->next, l3->next, carry);
        } else if (l1 != nullptr) {
            l3 = new ListNode();
            l3->val = (l1->val + carry) % 10;
            carry = (l1->val + carry) / 10;
            l3->next = addTwoNumbersAux(l1->next, l2, l3->next, carry);
        } else if (l2 != nullptr) {
            l3 = new ListNode();
            l3->val = (l2->val + carry) % 10;
            carry = (l2->val + carry) / 10;
            l3->next = addTwoNumbersAux(l1, l2->next, l3->next, carry);
        } else if(carry > 0){
            l3 = new ListNode();
            l3->val = carry;
            l3->next = addTwoNumbersAux(l1, l2, l3, 0);
        } else {
            l3 = nullptr;
        }
        
        return l3;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3;
        return addTwoNumbersAux(l1, l2, l3, 0);
    }
};