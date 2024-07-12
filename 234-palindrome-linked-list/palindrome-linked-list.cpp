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
        if(head==NULL || head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        while(slow!=NULL){
            ListNode* forw=slow->next;
            slow->next=prev;
            prev=slow;
            slow=forw;
        }
        fast=head;
        while(prev!=NULL && fast!=NULL){
            if(prev->val!=fast->val) return false;
            prev=prev->next;
            fast=fast->next;
        }
        return true;

        

        
       
    }
};