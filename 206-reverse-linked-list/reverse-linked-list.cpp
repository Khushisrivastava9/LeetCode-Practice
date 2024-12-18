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
ListNode* revers(ListNode* temp,ListNode* pre){
    if(temp==NULL) return pre;
    ListNode* forw=temp->next;
    temp->next=pre;
    return revers(forw,temp);
}
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* pre=NULL;
        return revers(temp,pre);
    }
};