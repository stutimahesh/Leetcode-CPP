class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* head= &dummy;
        int carry=0;

        while(l1 || l2){
            int val1= (l1==nullptr)? 0: l1->val;
            int val2= (l2==nullptr)? 0: l2->val; 
            int value= val1 + val2 + carry;

            ListNode* curr= new ListNode();
            curr->val = value%10;
            head->next= curr;
            head= head->next;

            if(value>9) carry=1;
            else carry=0; 

            if(l1)l1= l1->next;
            if(l2)l2= l2->next;
        }

        if(carry==1){
            ListNode* curr= new ListNode(1,nullptr);
            head->next= curr;
        }

        return dummy.next;
    }
};