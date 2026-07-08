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
    int getDecimalValue(ListNode* head) {
        ListNode* curr=head;
        if(curr->next==nullptr) return curr->val;
        int power=1;
        while(curr->next){
            curr=curr->next;
            power*=2;
        }
        int res=0;
        curr=head;
        while(power>0){
            res+= (curr->val)*power;
            curr=curr->next;
            power/=2;
        }
        return res;
    }
};