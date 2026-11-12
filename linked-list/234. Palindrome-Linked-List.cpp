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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;

        stack<int> stk;
        ListNode* slow= head;
        ListNode* fast= head;

        while(fast && fast->next){
            stk.push(slow->val);
            slow= slow->next;
            fast= fast->next->next;
        }
        if(fast!=nullptr) slow= slow->next;

        while(slow){
            if(stk.top() != slow->val) return false;
            slow= slow->next;
            stk.pop();
        }

        return stk.empty();
    }
};