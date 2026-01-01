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
        if(len-n==0){
            ListNode* newnode=head->next;
            return newnode;
            delete head;
        }
        len=len-n;
        ListNode* node=head;
        while(--len && head->next!=NULL){
            head=head->next;
        }
        if(head!=NULL ) head->next=head->next->next;
        return node;
    }
};