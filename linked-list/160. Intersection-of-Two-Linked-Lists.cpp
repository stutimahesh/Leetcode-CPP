/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//Approach 1: Brute Force 
//Time Complexity: O(m*n), Space Complexity: O(1)

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* currA= headA;
        ListNode* currB= headB;

        while(currA != nullptr){
            currB= headB;
            while(currB != nullptr){
                if(currA == currB){
                    return currA;
                }
                currB= currB->next;
            }
            currA= currA->next;
        }

        return nullptr;
    }
};

//Approach 2: Two Pointer Approach
//Time Complexity: O(m+n), Space Complexity: O(1)

class Solution{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* currA= headA;
        ListNode* currB= headB;

        while(currA != currB){
            currA= (currA==nullptr) ? headB : currA->next;
            currB= (currB==nullptr) ? headA : currB->next;
        }

        return currA;
    }

}

//Approach 3: Length Difference Approach
//Time Complexity: O(m+n), Space Complexity: O(1)

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a= headA;
        ListNode* b= headB;

        int lenA=0;
        int lenB=0;

        while(a != nullptr){
            lenA++;
            a= a->next;
        }
        while(b != nullptr){
            lenB++;
            b= b->next;
        }

        if(lenA>lenB){
            int diff= lenA-lenB;
            a= headA;
            b= headB;
            for(int i=0;i<diff; i++){
                a= a->next;
            }
            for(int i=diff; i<lenA; i++){
                if(a==b) return b;
                a= a->next;
                b=b->next;
            }
        }else{
            int diff= lenB-lenA;
            a= headA;
            b= headB;
            for(int i=0;i<diff; i++){
                b= b->next;
            }
            for(int i=diff; i<lenB; i++){
                if(a==b) return a;
                a= a->next;
                b=b->next;
            }
        }
        return nullptr;
    }
};