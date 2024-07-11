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
ListNode* recrevll(ListNode* temp,ListNode* forw){
    if(temp==NULL) return forw;
    ListNode* curr=temp->next;
    temp->next=forw;
    return recrevll(curr,temp);

}
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* forw=NULL;
        return recrevll(temp,forw);
        
    }
};