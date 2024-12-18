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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;
        int len=0;
        ListNode* temp=head;
        while(temp){
            len++;
            temp=temp->next;
        }
        if (n == len) {
            ListNode* newHead = head->next;
            delete head; 
            return newHead;
        }
        int torem=len-n;
        temp=head;
        for(int i=1;i<torem;i++){
            temp=temp->next;
        }
        if(temp->next!=NULL){
            temp->next=temp->next->next;
        }
        return head;
    }
};